#include <stdio.h>
#include "../include/str.h"
#include "../include/io.h"
#include "../include/array.h"

void print(const string msg) {
  fputs(msg, stdout);
}

void eprintln(const string msg) {
  fprintf(stderr, "%s\n", msg);
}

void eprint(const string msg) {
  fputs(msg, stderr);
}

heap_string input(void) {
  size_t length = 0;
  size_t capacity = 16;
  string buffer = malloc(capacity);

  int ch;
  while ((ch = getchar()) != EOF && ch != '\n') {
    if (length + 1 >= capacity) {
      capacity *= 2;
      buffer = realloc(buffer, capacity);
    }
    buffer[length++] = (char)ch;
  }
  buffer[length] = '\0';

  heap_string result = heap_string_init(buffer);
  free(buffer);
  return result;
}
