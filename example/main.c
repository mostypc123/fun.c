#include "err.h"
#include "io.h"
#include "num.h"
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

  print("some input! ");
  fflush(stdout);
  var text = input();
  print("you said: ");
  println(text->data);
  delete(text);

  printf("%d\n", clamp(5, 10, 15));

  result_print_set(RESULT_PRINT_SETTER_OK, "\033[92;1mok\033[0m: ");

  let test_result = result(0, "testing results");
  print_result(test_result);
  delete(test_result);

  return 0;
}
