#include <stdio.h>
#include "../include/str.h"
#include "../include/io.h"

void print(const char* msg) {
  fputs(msg, stdout);
}

void eprintln(const char* msg) {
  fprintf(stderr, "%s\n", msg);
}

void eprint(const char* msg) {
  fputs(msg, stderr);
}
                            
