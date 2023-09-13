
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

void test3(){
	for(int i=0;i<=10;i++){
       printf("%d\n",i );
        }
}

void test4(){
	int a=10;
	for (int i = 1; i <=10; ++i)
	{
		printf("%d\n",i*a );
	}
}
void test5(){
	for(int i=10;i>=1;i--){
		printf("%d\n",i*10 );

	}
	}
void test6(){
	int b=10;
	for(int i=b;i>=1;i--){
		printf("%d\n", i*b);

	}
}

void test7(){
	for(int i=1;i<=25;i++){
		printf("%d\n",i*i );

	}
}
void test8(){
	for (int i =1; i <=30; ++i)
	{
		printf("%d\n",i*2 );
	}
}


//2 5 9 14 20 27 
void test9(){
  int a = 2 , b = 3;
  //printf("%d\n" , 2);
  int flag = 0;
  for (int i = 0 ; i <= 20 ; i++){
  	if(flag == 0){
  		printf("%d\n",a);
  		flag = 1;
  	}
  		a += b;
  		b++;
  		printf("%d\n", a);
  }
}

void test10(){
      int i,a=2,b=3;
      for( i=1;i<=20;i++){
           printf("%d\n",a);
           a += b; 
          b++; 
      }
}

void test11(){
	int n = 100;
	int ans = n * (n + 1) / 2;
	int sn = (2 + n)*25;
	int fin = ans - sn;
	printf("%d\n",fin);
}

void test12(){
	int a[100];
	int c = 0;
	for (int i = 1; i <=100; ++i)
	{
		if (i&1)
		{
			a[c++]=i;
		}
	}
	int sum=0;
	for (int i = 0; i <50 ; ++i)
	{
		sum+=a[i];

	}

		printf("%d\n", sum);
} 

 void test13(){
 	int n , f = 1;
 	scanf("%d",&n);
 	for(int i = n ; i > 0 ; i--){
 			f *= i;
 	}
 	printf("%d\n", f);
 }

void test14(){
	int n;
	scanf("%d",&n);
	int fact[100];
	fact[0] = 1 , fact[1] = 1;
	for (int i = 2 ; i <= 10 ; i++){
		fact[i] = i * fact[i - 1];
	}
	int ans = 0;
	int r = 2;
	for (int i = 0 ; i <= 10 ; i++){
		printf("%d\n",fact[i]);
	}
	int fx = fact[n - r] * fact[r];
	ans = fact[n] / fx;
	printf("%d\n",ans );
}

void test15(){
	int num,rev=0,rem,m;
	printf("Enter the value of num:");
	scanf("%d",&num);
	m=num;
	while(num>0)
	{
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	printf("Reverse of %d id %d",m,rev);
}

void test16(){
	int num,rem,sum=0,m;
	printf("Enter a pos num:");
	scanf("%d",&num);
	m=num;

	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num /= 10;
	}
	printf("sum of %d is %d",m,sum );
}

void test17(){
	int num,sum=0,m,rem;
	printf("Enter a positive num:");
	scanf("%d",&num);
	m=num;

	while(num>0)
	{
		rem = num%10;
		sum=sum+rem*rem*rem;
		num /= 10;
	}
	if(m==sum)
	printf("%d is armstrong num:",m);
	else
	printf("%d is not armstrong:",m);
}


int main(int argc, char const *argv[])
{
	
	test();
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
	//test16();
	//test17();
	return 0;
}