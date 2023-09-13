#include <stdio.h>
int sum(int x, int y);
int main()
{
    int num1,num2,total;
    printf("Enter values:" );
    scanf("%d%d",&num1,num2);
    total=sum(num1,num2);
    
    printf("Sum of num1 and num2 is %d",total );
    return 0;
}
int sum(int x,int y)
{
    int total=x+y;
    return total;
}