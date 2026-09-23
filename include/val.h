#pragma once

#include <stdbool.h>

#define let const auto
#define var auto

#define loop while(1)

#ifndef DEBUG
  #define DEBUG 0
#endif
#define debug if(DEBUG)

#define __FUNCTION_USES_SHARED_BUF
