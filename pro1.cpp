

#include <stdio.h>
#include<string.h>


void f(){
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

void test(){
	int n ; scanf("%d" , &n);
	int str[100];
	int i = 0;
	while(n > 0){
		if(n % 2 == 0){
			str[i] = 0;
			printf("%c\n", '0');
			i++;
			n /= 2;
		}
		else{
			str[i] = 1;
			printf("%d\n",1);
			i++;
			n /=2;
		}
	}
	for (int j =i-1;j>=0;j--){
		printf("%d" , str[j]);
	}
}


int main()
{
	test();

}

