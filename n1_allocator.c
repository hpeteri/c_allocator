#include <stdlib.h>

#include "n1_allocator.h"
n1_Allocator default_allocator(){
  n1_Allocator allocator = {.alloc = malloc,
    .free = free,
    .realloc = realloc};
  
  return allocator;
}
