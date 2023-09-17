
// Write a program in C to find the sum of the series
// 1!+2!+3!+4!+5! using the function.

/*#include <stdio.h>


int main(){
	int f=1,sum=0;
	printf("Is the series\n");
	for(int i=1;i<=5;i++){
		
		f=f*i;
		sum=sum+f;
		
		printf("%d\t" ,f);
	}
	printf("\n%d is the sum of series.\t" ,sum);
	return 0;
}  */

#include <stdio.h>



int main()
{
	int fact[100];
	fact[0] = 1 , fact[1] = 1;
	for (int i = 2 ; i < 100 ; i++){
		fact[i] = i * fact[i - 1];
	}
	int sum = 0 ;
	for (int i = 3 ; i <= 5 ; i++){
		sum += fact[i] / i;
	}
	printf("%d\n",sum);

}

