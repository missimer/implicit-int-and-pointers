#ifndef _MY_STRUCT_H_
#define _MY_STRUCT_H_

struct my_struct {
  int foo;
  int bar;
  char large_buffer[0x1000000];
};

#  ifdef INCLUDE_PROTOTYPE
struct my_struct *alloc_my_struct(int foo, int bar);
#  endif

#endif // _MY_STRUCT_H_
