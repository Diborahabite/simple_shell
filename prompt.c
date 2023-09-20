#include <stdio.h>
#include <stdlib.h>

int main(void)
{
         size_t n = 0;
         char *buf;

          
          printf("root@799d424e8685$ ");
          getline(&buf, &n, stdin);
	  printf(" %s", buf);
	 

	  free(buf);

	  return (0);
}
