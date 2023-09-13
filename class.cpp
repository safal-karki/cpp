/*int main(int argc, char const *argv[])
{
	int i = 1;
	while(i <= 5){
		printf("%s\n", "lauda");
		i++;
	}
	do{
		printf("%s\n","beh" );
	}while(false);
	return 0;
}
*/


/*#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("%d\n",i);
	}
	return 0;
}*/

#include <stdio.h>
void test(){
	int i;
	for(i=10;i>=1;i--){
		printf("%d\n",i*10 );
	}
}

void test2(){
	for(int i=1;i<=30;i++){
		printf("%d\n", 2*i);
	}
}



int main(int argc, char const *argv[])
{
	
	//test();
	test2();
	
	return 0;
}