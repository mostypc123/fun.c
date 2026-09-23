#include "../include/base.h"

int clamp(int num, int min, int max) {
  if (num < min) {
    return min;
  } else {
    return max;
  }
}
