/*
 * Copyright 2014-2020 Real Logic Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AERON_NAME_RESOLVER_H
#define AERON_NAME_RESOLVER_H

#include "aeron_socket.h"
#include <stdbool.h>
#include <stdio.h>
#include "aeron_driver_common.h"
#include "aeron_driver_context.h"

#define AERON_NAME_RESOLVER_CSV_TABLE "csv_table"
#define AERON_NAME_RESOLVER_CSV_TABLE_ARGS_ENV_VAR "AERON_NAME_RESOLVER_CSV_LOOKUP_TABLE_ARGS"

typedef int (*aeron_name_resolver_resolve_func_t)(
    aeron_name_resolver_t *resolver,
    const char *name,
    const char *uri_param_name,
    bool is_re_resolution,
    struct sockaddr_storage *address);

/**
 * Resolves a name to a host:port string.
 *
 * @return 0 if not found, 1 if found, -1 on error.
 */
typedef int (*aeron_name_resolver_lookup_func_t)(
    aeron_name_resolver_t *resolver,
    const char *name,
    const char *uri_param_name,
    bool is_re_resolution,
    const char **resolved_name);

typedef struct aeron_name_resolver_stct
{
    aeron_name_resolver_lookup_func_t lookup_func;
    aeron_name_resolver_resolve_func_t resolve_func;
    void *state;
}
aeron_name_resolver_t;

aeron_name_resolver_supplier_func_t aeron_name_resolver_supplier_load(const char *name);

int aeron_name_resolver_init(aeron_driver_context_t *context, aeron_name_resolver_t *resolver, const char *args);

int aeron_name_resolver_supplier_default(
    aeron_driver_context_t *context,
    aeron_name_resolver_t *resolver,
    const char *args);

int aeron_name_resolver_resolve_default(
    aeron_name_resolver_t *resolver,
    const char *name,
    const char *uri_param_name,
    bool is_re_resolution,
    struct sockaddr_storage *address);

int aeron_name_resolver_lookup_default(
    aeron_name_resolver_t *resolver,
    const char *name,
    const char *uri_param_name,
    bool is_re_resolution,
    const char **resolved_name);

int aeron_name_resolver_resolve_host_and_port(
    aeron_name_resolver_t *resolver,
    const char *name,
    const char *uri_param_name,
    bool is_re_resolution,
    struct sockaddr_storage *sockaddr);

#endif //AERON_NAME_RESOLVER_H