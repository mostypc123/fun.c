#include <stdio.h>

void print(const char* msg) {
  fputs(msg, stdout);
}

void eprintln(const char* msg) {
  fprintf(stderr, "%s\n", msg);
}

void eprint(const char* msg) {
  fputs(msg, stderr);
}
                              
