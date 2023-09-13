#include <stdio.h>
void test(){
	
   
}

void test2(){

    int count = 0,num;

    
    printf("Enter any number: ");
    scanf("%d", &num);

    do
    {
        
        count++;
        num /= 10;
    } while(num> 0);

    printf("Total digits: %d", count);
}
 void test3(){
 	int i,j,k;
 	for( i=5;i>=1;i--){
 		for(j=5;j>=i;j--){
 			printf("%d\t",j);
 		}
 		printf("\n");
 	}
 }

void test4(){
	for(int i = 1 ; i <= 5; i++){
		for (int j = 1 ; j <= i ; j++){
			printf("%s", "1");
		}
		printf("\n");
	}
}

void test5(){
	int i,j;
	for(i=1;i<=5;i++){
			for(j=1;j<=5;j++){
					printf("%d",j );
			}
			printf("\n");
	}
}
 void test6(){
 		int i,j;
 		for(i=1;i<=5;i++){
 				for(j=i;j<=5;j++){
 						printf("%d",j);
 				}
 				printf("\n");
 		}

 }
 void test7(){
 	int i,j,a=5;
 	for(i=1;i<=5;i++){
 		for(j=1;j<=5;j++){
 			printf("%d",i );
 		}
 		printf("\n");
 	}
 	
 }
 
 void test8(){
 	int i,j,a=5;
 	for(i=5;i>=1;i--){
 		for(j=1;j<=i;j++){
 			printf("%d",j );
 		}
 		printf("\n");
 	}
 }
 void test9(){
 	int i,j,a=2,b=5;
 	for(i=1;i<=5;i++){
 		for(j=i;j<=b;j++){
 			printf("%d\t",j);

 		}
 		
 		b++;
 		printf("\n");
 	}
 }
  	void test10(){
  		int i,num[10];
  		printf("Enter the result: ");
  		for(i=0;i<10;i++){
  		
  		scanf("%d", &num[i]);
  		}
  		printf("list of num: \n");
  		for(i=0;i<10;i++){
  			printf("%d\t",num[i]);
  		}

 }
void test11(){
	int i,num[10],count=0,j;
	for(i=0;i,i<10;i++){
		printf("Enter a number: ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++){
		count=0;
		for(j=0;j<=num[i];j++){
			if (num[i]%j==0)
					count++;
			
		}
		if(count==2)
		printf("%d\t",num[i]);
	}
}

void test12(){
	int m[2][3],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter a number: " );
			scanf("%d",&m[i][j]);
		}

	}
	printf("\n 2*3 matrix: \n" );
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",m[i][j] );
		}
		printf("\n");
	}
}
void test13(){
int m[3][2],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("Enter a number: " );
			scanf("%d",&m[i][j]);
		}

	}
	printf("\n 3*2 matrix: \n" );
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",m[i][j] );
		}
		printf("\n");
	}
}
void test14(){
	// wap to find the sum of two matrix
	int i,j,a[2][3],b[2][3],c[2][3];

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		printf("Enter values" );
		scanf("%d ",&a[i][j]);
	 }
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("enter values: " );
			scanf("%d ",&b[i][j]);
		}
	}
	
      for(i=0;i<2;i++){
      	
      	for(j=0;j<3;j++){
      		c[i][j]=0;
      		c[i][j]=c[i][j]+a[i][j]+b[i][j];
      	}
      	printf("%d",c[i][j] );
      }
      printf("Is matrix:\n" );
      for(i=0;i<2;i++){
      	for(j=0;j<3;j++){
      		printf("%d\t",c[i][j] );
      	}
      	printf("\n");
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
	test11();
	//test12();
	//test13();
	//test14();
	return 0;
}