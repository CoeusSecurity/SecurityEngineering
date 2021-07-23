/* C-program to Reverse a string */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* Function to print reverse of the passed string */
void reverse (char *str)
{
if (*str)
{
reverse(str+1);
printf ("%c", *str);
}
}
/* the main function */
int main (int argc, char *argv[])
{
char buffer[5];
// a prompt how to execute the program
if (argc < 2)
{
printf("Syntax: %s <characters>\n", argv[0]);
exit(0);
}
//copy the input to buffer
strcpy(buffer, argv[1]);
printf("buffer content: %s\n", buffer);
// print in reverse
printf("Revers of the string is :");
reverse(buffer);
return 0;
}


#test
