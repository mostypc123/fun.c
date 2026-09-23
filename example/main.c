#include "io.h"
#include "str.h"
#include <base.h>

int entry(heap_array args) {
  if (args->length > 1) {
    eprintln("Too many arguments.");
    return 2;
  }

  let message = "Hello World!";
  loop {
    println(message);

    debug {
      eprintln("lol");
    }

    break;
  }

  let my_heap_string = heap_string_init("Hello");
  print(my_heap_string->data);
  if (starts_with(my_heap_string->data, "Hello")) {
    println(" World!");
  } else {
    println("!");
  }
  delete(my_heap_string);

  return 0;
}
