// Write a program in C to find the sum of the series
// 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.

/*#include <stdio.h>


int main(){
	int f=1,sum=0;
	printf("Is the series\n");
	for(int i=1;i<=5;i++){
	f=f*i;
	sum=sum+f/i;
	printf("%d\t" ,f);
		}
		printf("\n%d \n",sum );

	
	return 0;
} */

#include<stdio.h>

int divsum(int,int);

int main()
{
	int a,b,sum;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	sum=divsum(a,b);
	return sum;
	printf("%sis sum of divsum\n",sum );
}

int divsum(int x,int y)
{
	int f=1,s=0;
	for(int i=x;i<=y;i++){
	f=f*i;
	s=s+f/i;
	
		}
		printf("\n%d \n",s );

	
	return 0;
}