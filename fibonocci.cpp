#include<stdio.h>


int main(){
	int f[100]; f[0] = 1 , f[1] = 1;
	for (int i = 2 ; i <= 50 ; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	for (int i = 0 ; i < 10 ; i++){
		printf("%d\n",f[i]);
	}
}

int main(int argc, char const *argv[])
{
	
	//test();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test9();
	//test10();
	//test11();
	//test12();
	//test13();
	//test14();
	//test15();
	return 0;
}