#include "../include/mem.h"
#include <stdlib.h>
#include <string.h>
#include "../include/str.h"
#include "../include/val.h"
#include "../include/array.h"

heap_string heap_string_init(const char* s) {
  const char* ns = s ? s : "";
  return heap_array_from_carr(ns, strlen(ns) + 1);
}

char* heap_string_dup(heap_string s) {
  return strdup(s->data);
}

void heap_string_copy(heap_string s, size_t size, char* cs) {
  for (size_t i = 0; i < size; i++) {
    cs[i] = ((char*)s->data)[i];
  }
}

bool starts_with(const char* full, const char* find) {
  if (strlen(find) > strlen(full)) {
    return false;
  }

  for (size_t i = 0; i < strlen(find); i++) {
    if (find[i] != full[i]) {
      return false;
    }
  }

  return true;
}

__FUNCTION_USES_SHARED_BUF char* char_to_str(char c) {
  static __thread char result[2];
  result[0] = c;
  result[1] = '\0';
  return result;
}
