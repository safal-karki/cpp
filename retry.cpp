
#include <stdio.h>
void test(){
	 long long count = 0,num;

    
    printf("Enter any number: ");
    scanf("%lld", &num);

    while(num> 0)
    {
        
        count++;
        num /= 10;
    }

    printf("Total digits: %lld", count);
}

void test2(){
	int i,j,num[10],pcount=0,ncount=0;
	for(i=0;i<10;i++){
		printf("Enter a number: ");
	scanf("%d",&num[i]);
    }
	
	for(i=0;i<10;i++){
	 pcount=0;
		for(j=1;j<=num[i];j++){
			if(num[i]%j==0)
				pcount++;
			else
				ncount++;
		}
		if(pcount==2)
			printf("%d is prime. ", num[i]);
		else
			printf("%d is conjugate. ", num[i] );
		
	}
	
}
	
	void test3(){
		int i,j,b=5;
		for(i=1;i<=9;i+=2){
			
				for(j=i;j<=b;j++){
					printf("%d\t", j );
				}
				b+=2;
				printf("\n");
		}
	}
   	
void test4(){
	//a[i][j]=a[j][i];
	int i,j,c,r,a[5][5],t[5][5];
	printf("Enter coloumns and rows:" );
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Matrix:" );
			scanf("%d",&a[i][j]);
		}
	
	}
	printf("Transpose of matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			t[j][i]=a[i][j];
		}
		
	}
	printf("Enter num:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",t[i][j] );
		}
		printf("\n");
	}
	


}
	

int main(int argc, char const *argv[])
{
    
    //test();
    //test2();
    //test3();
    test4();
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