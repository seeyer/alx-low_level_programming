#include <stdlib.h>
#include <time.h>
#include <stio.h>
/**
 * main -prints the last digit of the random
 * number stored in thevariable n
 * return: Always 0 (Success)
 */
int main (void)
{
	srand(time(0));
	n= rand() - RAND_MAX / 2;
	prinf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
