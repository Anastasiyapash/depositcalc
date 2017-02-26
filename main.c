#include <stdio.h>

int main(){
	int day,sum, sum1, sum2;
	printf ("vvedite day and sum\n");
	scanf ("%d %d", &day, &sum);
	
	sum1 = sum;
	sum2 = sum;
	if (day<=30)  
	{
	sum1=sum1-(sum1*0.1);
	sum2=sum2-(sum2*0.1);
	}	
	if (day>=31 && day<121) 
	{
		sum1=sum1+(sum1*0.02);
		sum2=sum2+(sum2*0.03);
	}
	if (day>=121 && day<241)
	{
		sum1=sum1+(sum1*0.06);
		sum2=sum2+(sum2*0.08);
	}
	if (day>=241 && day<366)
	{
		sum1=sum1+(sum1*0.12);
		sum2=sum2+(sum2*0.15);
	}
	
	if (sum<100000)   
	{ 
		sum=sum1;  
	} else
	{
		sum=sum2;  
	}
	printf ("sum=%d\n", sum);
	  
	return 0;
}
