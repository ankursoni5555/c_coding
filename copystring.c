#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]="Sample string";
  char str2[40];
  strcpy (str2,str1);
  printf ("str1: %s\nstr2: %s\n",str1,str2);
  printf("%d\n%d\n",&str1,&str2);
  printf("%d\n",sizeof(str1));
  return 0;
}


