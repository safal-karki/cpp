//wap to calculate factorial of given recursive function.

/*#include <stdio.h>

int facto(int);
int main()
{
	int n,f;
	printf("Enter value");
	scanf("%D",&n);
	f=facto(n);
	printf("factorial of %d is %d",n,f );
}
int facto(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return n*facto(n-1);
}
*/


//Wap to display sum of n natural numbers;

/*Declaring the functions : int function ( int );
Calling the function : function( x );
Defining the function :
             int function( int x )
             {
               statements;
               return x;
             }
             */
#include <stdio.h>

int sum(int,int);

 main(){
 	int a,b,add;
 	printf("enter values for a and b:" );
 	scanf("%d%d",&a,&b);
 	add = sum(a,b);
 	printf("%d is sum of a and b", add);

 }
  
  int sum(int x,int y)
  {

  	int c=0,count;
  
  	for(int i=x;i<=y;i++){
      count=0;
  		for(int j=x;j<=y;j++){
        if (i%j==0)
          count++;
        
      }
      if(count==2)
        c=c+i;
     
  	}

  	return c;
  }
  
