#include<stdio.h>
//check if given number is even or odd

int check(int);

int main()
{
	int a,correct;
	printf("Enter values:\n");
	scanf("%d",&a);
	correct =check(a);
	return a;
}

int check(int z)
{
	if(z%2==0)
		printf("%d is even. \n",z );
	else
		printf("%d is odd. \n", z);
	return 0;

}
