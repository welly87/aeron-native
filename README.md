
Aeron
=====

<a href="https://foojay.io/works-with-openjdk/">
   <img align="right" 
        src="https://github.com/foojayio/badges/raw/main/works_with_openjdk/Works-with-OpenJDK.png"   
        width="100">
</a>

[![GitHub](https://img.shields.io/github/license/real-logic/Aeron.svg)](https://github.com/real-logic/aeron/blob/master/LICENSE)
[![Javadocs](https://www.javadoc.io/badge/io.aeron/aeron-all.svg)](https://www.javadoc.io/doc/io.aeron/aeron-all)

[![Actions Status](https://github.com/real-logic/aeron/workflows/Continuous%20Integration/badge.svg)](https://github.com/real-logic/aeron/actions)
[![Total Alerts](https://img.shields.io/lgtm/alerts/g/real-logic/aeron.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/real-logic/aeron/alerts)
[![Code Quality: Java](https://img.shields.io/lgtm/grade/java/g/real-logic/aeron.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/real-logic/aeron/context:java)
[![Code Quality: C/C++](https://img.shields.io/lgtm/grade/cpp/g/real-logic/aeron.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/real-logic/aeron/context:cpp)

Efficient reliable UDP unicast, UDP multicast, and IPC message transport. Java and C++ clients are available in this
repository, and a [.NET client](https://github.com/AdaptiveConsulting/Aeron.NET) is available from a 3rd party. All
three clients can exchange messages across machines, or on the same machine via IPC, very efficiently. Message streams
can be recorded by the [Archive](https://github.com/real-logic/aeron/tree/master/aeron-archive) module to persistent
storage for later, or real-time, replay. Aeron [Cluster](https://github.com/real-logic/aeron/tree/master/aeron-cluster)
provides support for fault-tolerant services as replicated state machines based on the
[Raft](https://raft.github.io/) consensus algorithm.

Performance is the key focus. A design goal for Aeron is to be the highest throughput with the lowest and most
predictable latency of any messaging system. Aeron integrates with
[Simple Binary Encoding (SBE)](https://github.com/real-logic/simple-binary-encoding) for the best possible message
encoding and decoding performance. Many of the data structures used in the creation of Aeron have been factored out to
the [Agrona](https://github.com/real-logic/agrona) project.

For details of usage, protocol specification, FAQ, etc. please check out the
[Wiki](https://github.com/real-logic/aeron/wiki).

For those who prefer to watch a video then try [Aeron Messaging](https://www.youtube.com/watch?v=tM4YskS94b0) from
StrangeLoop 2014. Things have advanced quite a bit with performance and features, but the basic design still applies.

For the latest version information and changes see the [Change Log](https://github.com/real-logic/aeron/wiki/Change-Log)
with Java **downloads** at [Maven Central](http://search.maven.org/#search%7Cga%7C1%7Caeron).

Commercial support, training, and development on Aeron is available from
[sales@real-logic.co.uk](mailto:sales@real-logic.co.uk?subject=Aeron). Premium features are available to customers on
commercial support which include transport bindings for Solarflare/Xilinx ef_vi, Mellanox VMA, and AWS DPDK for further
reduction in latency and increased throughput. Secure communications is available with ATS (Aeron Transport Security)
for encrypted streams.

### How do I use Aeron?

1. [Java Programming Guide](https://github.com/real-logic/aeron/wiki/Java-Programming-Guide)
1. [C++11 Programming Guide](https://github.com/real-logic/aeron/wiki/Cpp-Programming-Guide)
1. [Best Practices Guide](https://github.com/real-logic/aeron/wiki/Best-Practices-Guide)
1. [Monitoring and Debugging](https://github.com/real-logic/aeron/wiki/Monitoring-and-Debugging)
1. [Configuration Options](https://github.com/real-logic/aeron/wiki/Configuration-Options)
1. [Channel Specific Configuration](https://github.com/real-logic/aeron/wiki/Channel-Configuration)
1. [Aeron Archive (Durable/Persistent Stream Storage)](https://github.com/real-logic/aeron/wiki/Aeron-Archive)
1. [Aeron Cluster (Fault Tolerant Services)](https://github.com/real-logic/aeron/tree/master/aeron-cluster)
1. [Aeron Cookbook](https://aeroncookbook.com/) by Shaun Laurens.

### How does Aeron work?

1. [Transport Protocol Specification](https://github.com/real-logic/aeron/wiki/Transport-Protocol-Specification)
1. [Design Overview](https://github.com/real-logic/aeron/wiki/Design-Overview)
1. [Design Principles](https://github.com/real-logic/aeron/wiki/Design-Principles)
1. [Flow Control Semantics](https://github.com/real-logic/aeron/wiki/Flow-and-Congestion-Control)
1. [Media Driver Operation](https://github.com/real-logic/aeron/wiki/Media-Driver-Operation)

### How do I hack on Aeron?

1. [Hacking on Aeron](https://github.com/real-logic/aeron/wiki/Hacking-on-Aeron)
1. [Performance Testing](https://github.com/real-logic/aeron/wiki/Performance-Testing)
1. [Building Aeron](https://github.com/real-logic/aeron/wiki/Building-Aeron)

License (See LICENSE file for full license)
-------------------------------------------
Copyright 2014-2022 Real Logic Limited.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.  
=======
# aeron-native
