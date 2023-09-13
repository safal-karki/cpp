// (return value)int main(*paramater*)

#include<stdio.h>
void test(){
//wap to input a number and display it's factors:
	int num,a;

	printf("enter values:" );
	scanf("%d",&num);

	printf("Factors of n are:\n");

	for(int i=1;i<=num;i++){
		a=0;
		if(num%i==0){
			a++;
			printf("%d\t",i );
		}
		if(a==2)
		printf("\n");
	}


}

void test2(){

	
}


int main(int argc, char const *argv[]){
	test();
	//test2();
	return 0;
}