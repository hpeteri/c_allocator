#ifndef N1_ALLOCATOR_H
#define N1_ALLOCATOR_H

#define N1_ZERO_MEMORY(data){memset(data, sizeof(*data), 0);}

typedef struct n1_Allocator{
  void* (*alloc)(size_t);
  void (*free)(void*);
  void* (*realloc)(void*, size_t);
    
} n1_Allocator;

n1_Allocator default_allocator();

#ifdef N1_ALLOCATOR_IMPLEMENTATION
#include <stdlib.h>

n1_Allocator default_allocator(){
  n1_Allocator allocator = {.alloc = malloc,
    .free = free,
    .realloc = realloc};
  
  return allocator;
}

#endif
#endif
