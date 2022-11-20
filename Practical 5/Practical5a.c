#include<stdio.h>
#include<math.h>

double arctanh1(const double x, const double d);
double arctanh2(double x);

void main()
{
	double d;
	printf("Enter the value of delta\n"); //taking the value of delta
	scanf("%lf",&d);
	
	double tan1[1000];
	double tan2[1000];
	int i=0;
	double x=-0.9;
	
	while(x<=0.9)
	{
		tan1[i]=arctanh1(x,d);
		tan2[i]=arctanh2(x);
		printf("The difference at x=%lf is %0.1lf\n",x,fabs(tan1[i]-tan2[i])); //getting the difference
		x=x+0.01;
		i++;
	}
}

//defining the functions

double arctanh1 (const double x, const double d) {
    double arcTan =0; 
    double elem, val;
    int n=0; 
do {
val=2*n+1;
elem=-pow(x, val) /val; 
arcTan +=elem;
n++;
} while(fabs (elem) >= d);
return arcTan;

}

double arctanh2(double x)
{
	return((log(1+x)-log(1-x))/2);
}

