#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - headers goes there 
 * Return:O
 */
int main(void)
{
    int i;
    srand(time(0));
    for (i = 'a'; i <= 'z'; i++) {
        putchar(i);
    }
    putchar('\n');
    return (0);
}
