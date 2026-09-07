imagine linking with a library and making your C code much easier to write...

# fun.c

A C23 library that adds utilities, types and macros to make writing C more fun.

THIS IS A WIP! some of this stuff is planned, i just started this

Instead of adding heap-allocated arrays and strings everywhere, `string` is a
typedef to `char*` and `heap_string` (WIP, will be) is a heap allocated string.

## Code example

```c
#include <base.h>

int entry(heap_array args) {
  if (args->length > 1) {
    eprintln("Too many arguments.");
    return 2;
  }
  
  let message = "Hello World!";
  println(message);
  
  return 0;
}
```

`let` is a macro to `const auto` and `var` is a macro to `auto`.

Even with the `heap_array`, the code runs very fast, benchmarked with 
`hyperfine -N` on an AMD Ryzen 5 5600U:

| Lang | Note | Time |
|------|------|------|
| C | Using -O3 with puts | 465.4 µs ±  60.6 µs |
| fun.c | Code above w/out arg checks or vars with -O3 | 560.3 µs ±  65.0 µs |
| Nim | Using echo, ORC, -d:release, C backend | 491.0 µs ±  67.9 µs |
| Rust | With -C opt-level=3 using println! | 673.5 µs ±  80.2 µs |
| Zig | It took 7ms. Zig sucks. | `sudo pacman -Rns zig` |
