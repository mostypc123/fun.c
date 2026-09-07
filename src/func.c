#include "../include/array.h"

int entry(heap_array args);

int main(int argc, char** argv) {
  heap_array args = heap_array_from_carr(argv, argc);
  int result = entry(args);
  delete(args);
  return result;
}

