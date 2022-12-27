#ifndef N1_ALLOCATOR_H
#define N1_ALLOCATOR_H

typedef struct n1_Allocator{
  void* (*alloc)(size_t);
  void (*free)(void*);
  void* (*realloc)(void*, size_t);
    
} n1_Allocator;

n1_Allocator default_allocator();

#endif
