#include "main.h"
#include <string.h>

/**
 * set_string sets the value of a pointer to a char
 *
 * Return: nothing
 */

void set_string(char **s, char *to){
  
  long unsigned int i;
  for (i=0; i<sizeof(s); i++)
    {
      **(s+i)=to[i];
    }
}
