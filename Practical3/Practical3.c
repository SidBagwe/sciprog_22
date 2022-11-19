#include<stdio.h>
#include<math.h>

void main()

{
	float a,b,sum,sum2,y[50],x=0;
	float sum1=0;	
	int n,i;
	a=0;
	b=22/21;
	sum=tan(a)+tan(b);
	printf("Sum of tan(a) and tan(b): %f\n",sum);
	
	n=12;
	for(i=0;i<n+1;i++)
	{
		y[i]=(b/12)*(i);
		sum1=sum1+2*tan(y[i]);	
	}
	sum1=sum1*((b-a)/(2*n));
	sum2=log(2);
	
	printf("Sum using loop : %f\n",sum1);
	printf("Log (2) : %f\n", sum2);
	
}

/* The values of the integration and log 2 are similiar as we can see ie ( 0.68 and 0.69 respectively)*/
