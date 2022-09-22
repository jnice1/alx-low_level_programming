#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Enty point
*
*Return: Always 0 (success)
*
*/
int main(void)
{
char letter;
 for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
 for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar("\n");
return (0);
}
