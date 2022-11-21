#include<stdio.h>

int *allocatearray(int n)
{
	int *p;
	p=(int *) malloc((n)*sizeof(int));
	if(p==NULL)
	{
		printf("Error inAllocating");
	}
	return p;
}

void fillwithones( int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=1;
	}
}

void printarray(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]:%d\n",i,a[i]);
	}
}

void freea(int *a)
{
	free(a);
}

void main()
{
	int n,*a;
	printf("Enter the Length\n");
	scanf("%d",&n);
	
	a=allocatearray(n);
	fillwithones(a,n);
	printarray(a,n);
	freea(a);
	
}
