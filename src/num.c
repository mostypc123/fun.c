#include "str.h"
#include <math.h>
#include <stdio.h>

int clamp(int num, int min, int max) {
  if (num < min) {
    return min;
  } else {
    return max;
  }
}

heap_string int_to_string(int num) {
  char result[(int)((ceil(log10(num))+1)*sizeof(char))];
  snprintf(result, sizeof(result), "%d", num);
  heap_string final = heap_string_init(result);
  return final;
}
