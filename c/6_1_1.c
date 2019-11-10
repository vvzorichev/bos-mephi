#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int i=0;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    i++;	  
  printf("Number of environment variables: %d\n", i);
  /*
   #!/bin/bash
   NUMOFENV=$(env | wc -l)
   echo "Number of environment variables: $NUMOFENV"
  */
}
