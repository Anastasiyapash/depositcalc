#include <stdio.h>
#include "deposit.h"

int main()
{
	int day, sum, sum1, sum2;
	printf ("vvedite day and sum\n");
	if (!scanf ("%d", &day) || !scanf ("%d", &sum))
	{
			printf("invalid input");
			return 1;
	}

	if(!validValue(day, sum))
	{
		printf("Invalid range\n");
		return 1;
	}	
	sum = getsum(day, sum);
	printf ("sum=%d\n", sum);
	  
	return 0;
}
