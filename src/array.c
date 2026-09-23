#include "../include/array.h"
#include "../include/mem.h"
#include <stdlib.h>

heap_array heap_array_init(void) {
  heap_array result = malloc(sizeof(__heap_array));
  
  result->current_size = 5;
  result->length = 0;
  result->data = malloc(result->current_size * sizeof(void*));

  return result;
}

heap_array heap_array_from_carr(const void* arr, size_t length) {
  heap_array result = malloc(sizeof(__heap_array));
  
  result->current_size = length;
  result->length = length;
  result->data = malloc(length * sizeof(void*));
  
  for (size_t i = 0; i < length; i++) {
    ((void**)result->data)[i] = ((void**)arr)[i];
  }
                                                                  
  return result;
}

void heap_array_push(heap_array arr, void* data) {
  if (arr->current_size == arr->length) {
    // not enough space, must resize arr->data
    arr->current_size += 5;
    arr->data = realloc(arr->data, arr->current_size * sizeof(void*));
  }
                                      
  arr->length += 1;
  ((void**)arr->data)[arr->length - 1] = data;
}

void heap_array_pop(heap_array arr) {
  ((void**)arr->data)[arr->length - 1] = NULL;
  arr->length -= 1;
}

void heap_array_clamp_mem(heap_array arr) {
  arr->current_size = arr->length;
  arr->data = realloc(arr->data, arr->current_size * sizeof(void*));
}

