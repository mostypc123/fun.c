#pragma once

#include <stddef.h>
#include "mem.h"
#include "val.h"

typedef char* string;

typedef heap_array heap_string;

heap_string heap_string_init(const string s);
#define heap_string_append heap_array_push
void heap_string_copy(heap_string s, size_t size, string cs);
void heap_string_free(heap_string s);
bool starts_with(const string full, const string find);
string char_to_str(char c);
__FUNCTION_USES_SHARED_BUF string char_to_str(char c);
