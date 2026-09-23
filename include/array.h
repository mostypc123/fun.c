#pragma once

#include <stddef.h>
#include "mem.h"

typedef struct __heap_array {
  void* data;
  size_t current_size;
  size_t length;
} __heap_array;

/* Create a blank heap_array. */
heap_array heap_array_init(void);

/* Create a heap_array from a C array 'arr' with length 'length'. */
heap_array heap_array_from_carr(const void* arr, size_t length);

/* Push 'data' to a heap_array. */
void heap_array_push(heap_array arr, void* data);

/* Pop the last value from a heap_array. */
void heap_array_pop(heap_array arr);

/* realloc() the allocated data from a heap_array to its length. */
void heap_array_clamp_mem(heap_array arr);

