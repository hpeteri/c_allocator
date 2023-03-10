#include <stdio.h>

#define N1_ALLOCATOR_IMPLEMENTATION
#include "n1_allocator.h"

int main(void){
  n1_Allocator allocator = default_allocator();
  
  void* data = allocator.alloc(10);
  data       = allocator.realloc(data, 20);
  allocator.free(data);
  
  return 0;
}
