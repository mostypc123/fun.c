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

