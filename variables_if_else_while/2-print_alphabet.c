#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - headers goes there 
 * Return:O
 */
int main(void)
{
int n;
int i;
srand(time(0));
n = rand() - RAND_MAX / 2;
for (i ='a';i<='z'; i++)
{
putchar(i);
}
putchar('\n');
return(0)
}
