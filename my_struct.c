#include <stdio.h>
#include <stdlib.h>
#include "my_struct.h"

struct my_struct*
alloc_my_struct(int foo, int bar)
{
  struct my_struct *instance = malloc(sizeof(*instance));
  if(instance != NULL) {
    instance->foo = foo;
    instance->bar = bar;
  }
  printf("instance in %s = %p\n", __func__, (void *)instance);
  return instance;
}
