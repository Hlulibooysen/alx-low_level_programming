#include "main.h"
#include <stdlib.h>
/**
* create_arrays - create an array of characters
*
* @size: an input for the size of array in int 
* @c: to store the srings of character
*
* Return: a pointer to the base charcter c 
*/
char *create_array(unsigned int size, char c)
{
size_t i;
char *ptr;
if (size ==0)
{
return (NULL);
}
ptr = malloc (size of (char) *size); 
if (ptr = NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr [i] = c;
}
return (ptr);
}
