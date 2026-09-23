#include "../include/err.h"

static char* ok = "ok: ";
static char* fail = "error: ";
void result_print_set(int which, char* what) {
  if (which == RESULT_PRINT_SETTER_OK) {
    ok = what;
  } else if (which == RESULT_PRINT_SETTER_FAIL) {
    fail = what;
  } else {
    printf("fun.c: error: caller of result_print_set() used wrong 'which' parameter.\n");
    exit(1);
  }
}

Result result(int code, string msg) {
  Result result = malloc(sizeof(__result));
  result->message = msg;
  result->code = code;
  result->ok = code == 0 ? true : false;

  return result;
}

void print_result(Result r) {
  printf("%s%s (%d)\n", r->ok ? ok : fail, r->message, r->code);
}
