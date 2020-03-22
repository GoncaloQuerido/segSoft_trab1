#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cpy(char *d, char *s, int n)
{
  while (n--!=0) *d++=*s++;
}

void foo(char *str, int s)
{
    char buffer[32];
   
    cpy(buffer, str, s);
    
}

int main(int argc, char **argv)
{
    char str[400];
    FILE *badfile;

    int retval = 0;

    badfile = fopen("smasher", "r");
    int s = fread(str, sizeof(char), 400, badfile);
    foo(str,s);

    retval = 0;  // write a virus that changes the retval to 66
    
    return retval;
}
