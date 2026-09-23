#pragma once

#include "base.h"

#define RESULT_PRINT_SETTER_OK 1
#define RESULT_PRINT_SETTER_FAIL 2

typedef struct {
  int code;
  bool ok;
  string message;
} __result;
typedef __result* Result;

Result result(int code, string msg);
void print_result(Result r);
void result_print_set(int which, char* what);
