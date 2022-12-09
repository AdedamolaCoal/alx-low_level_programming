#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main -Determines whether 5
 *is greater than 6, or it's 0
 */

int main(void)
{

int n, l;

srand(time(0));

n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
printf("Last digit of %d is %d and its greater than 5\n", n, l);

else if (l == 0)
printf("Last digit of %d is %d and is 0\n", n, l);

else
printf("Last digit of %d is %d and is less han 6 and not 0\n", n, l);

return (0);
}
