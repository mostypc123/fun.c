#pragma once

#include <stdlib.h>

struct __heap_array;
typedef struct __heap_array* heap_array;

void __func_free_heap_arr(heap_array arr);

#define delete(p) _Generic((p), \
  heap_array: __func_free_heap_arr, \
  default: free)(p)
