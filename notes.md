Busy spin strategies are best suited to environments where the number of available cores is greater than the number of threads wanting to run.

Synchronous designs are fundamentally limited as you cannot pipeline. "Smart Batching" more than mine. He calls it "Natural Batching".

# graviton related stuff

- [ ] Ordering Issues for [ARM](https://github.com/aws/aws-graviton-getting-started/blob/main/optimizing.md#ordering-issues)
- [ ] `grep -r __x86_64__ *` to find the arm alternatives
- [ ] adding flags `-mcpu=neoverse-512tvb` for [C/C++ compilers](https://github.com/aws/aws-graviton-getting-started/blob/main/c-c++.md)
- [ ] check atomic is there works with `objdump -d aeronmd | grep -i 'cas\|casp\|swp\|ldadd\|stadd\|ldclr\|stclr\|ldeor\|steor\|ldset\|stset\|ldsmax\|stsmax\|ldsmin\|stsmin\|ldumax\|stumax\|ldumin\|stumin' | wc -l`
- [ ] check load store exclusive `objdump -d aeronmd | grep -i 'ldxr\|ldaxr\|stxr\|stlxr' | wc -l`
- [ ] check GCC optims `nm aeronmd | grep __aarch64_have_lse_atomics | wc -l`