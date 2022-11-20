#include<stdio.h>

void main(){
	
	int n=5,p=3,q=4,i,j,k;
	double a[n][p],b[p][q],c[n][q];
	
	// Printing the matrix
	printf("Matrix A is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			a[i][j]=i+j;
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix B is :\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			b[i][j]=i-j;
			printf("%f\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
		}
	}
	
/*	for(i=0;i<n;i++)    
	{    
		for(j=0;j<q;j++)    
		{    
    		for(k=0;k<p;k++)    
			{    
				c[i][j]=c[i][j]+a[i][k]*b[k][j];    
			}    
		}    
	}*/
	
	
	matmult(n,p,q,a,b,c); //calling the function from matmult.c

	
	printf("Matrix C is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%f\t",c[i][j]);
		}
		printf("\n");
}
}
