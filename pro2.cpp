

#include <stdio.h>



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
	char str[100];
	int i = 0;
	while(n > 0){
		if(n % 2 == 0){
			str[i] = 0;
			i++;
			n /= 2;
		}
		else{
			str[i] = 1;
			i++;
			n /=2;
		}
	}
	for (int j = i ; j >= 0 ; j--){
		printf("%c" , str[i]);
	}
}


int main()
{
	test();

}

