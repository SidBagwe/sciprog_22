#include<stdio.h>
#include<math.h>

float pi=22/3,a[50];
float degtorad(float arg);
float area(float n);

int main(void) {
	float radang,degang,i,s;
	int x=0;
	for(i=0;i<=60;i+=5){
		radang = degtorad(i);
		a[x]=tan(radang);
		x=x+1;
	}
	s= area(i/5);
	printf(" Area of the term is : %f",s);	
}

float area(float n){
	float i,sum=0;	
	int c=0;
	for(i=0;i<n+1;i++)
	{
		sum=sum+2*a[c];	
		c=c+1;
	}
	return(sum);
}

float degtorad(float arg) {
return( (pi * arg)/180.0 );
}
	

