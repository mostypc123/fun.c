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
