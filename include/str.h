#pragma once

#include <stddef.h>
#include "mem.h"
#include "val.h"

typedef char* string;

typedef heap_array heap_string;

heap_string heap_string_init(const char* s);
void heap_string_copy(heap_string s, size_t size, char* cs);
void heap_string_free(heap_string s);
bool starts_with(const char* full, const char* find);
