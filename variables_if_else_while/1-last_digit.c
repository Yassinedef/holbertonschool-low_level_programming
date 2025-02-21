#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - betty style doc for function main goes ther
 *  Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2; 
if (n > 5)
{
printf ("You are pretty young!\n");
}
else if (n == 0)
{
printf("You are old\n");       
}
else{
printf("You are really old\n");
}
return (0);
}
