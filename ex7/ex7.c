#include <stdio.h>
#include <stdlib.h>
int main()
{
  void *ptr=(void*)0xffffffffc03f9000;
  printf("Value:  %d\n", *(int*)ptr );
  return 0;
}
