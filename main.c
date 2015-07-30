#include <stdio.h>
#include <stdlib.h>
#include "my_struct.h"

int main(void)
{
  struct my_struct *instance = alloc_my_struct(5, 10);

  printf("instance in %s = %p\n", __func__, (void *)instance);

  // rest of code ...

  instance->foo = 10;

  return 1;
}
