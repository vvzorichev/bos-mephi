#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int i=0;
  int len;
  sscanf(argv[1], "%d", &len);
  for (p = environ; *p != NULL && i<len; p++){
     i++;
     printf("%s\n", *p); /* разыменование указателя */
  }
}

