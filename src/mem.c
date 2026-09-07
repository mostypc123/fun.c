#include <stdlib.h>
#include "../include/array.h"

void __func_free_heap_arr(heap_array arr) {
  free(arr->data);
  free(arr);
}

