#include<stdio.h>
void fibo(int *Fn1,int Fn2, int *Fn)
{
	*Fn=*Fn1+Fn2;
}

void main()
{
	int n, s[50],s1=0,s2=1,sum=0,i;
	printf("Enter the sequence length :\n"); //taking the length
	scanf("%d",&n);
	printf("The Sequence is\n");
	printf("%d, %d",s1,s2);
	for (i=0;i<n-2;i++)  //printing the sequence
	{
		sum=s2+s1;
		s1=s2;
		s2=sum;
		s[i]=sum;
		printf(", %d",s[i]);
		
	}
}
