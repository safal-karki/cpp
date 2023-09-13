#include <stdio.h>

void test(){
    int num, rev=0, rem, m;
    printf("Enter the positive num:" );
    scanf("%d",&num);
    m=num;

    while(num>0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    printf("Reverse of %d is %d",m,rev );
}

void test2(){
    int n;
    printf("Enter the value for n:");
    scanf("%d",&n);
    

    if(n>0)
    printf("%d is positive",n );
    else if(n==0)
    printf("%d is zero",n);
    else
     printf("%d is negative",n);
}
    void test3(){
        int num,rem,m;
        scanf("%d",&num);
        rem=num%2;

        if(rem==0)
            printf("%d is even",num );

        else
            printf("%d is odd",num);
    }

    void test4(){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

               if(a>b&c)
            printf("%d a is greatest",a);
        else if (b>c)
            printf("%d b is greates",b);
        else
            printf("%d c is greates",c);
     
    }

void test5(){
    int num,i,count,j;

    for(i=1;i<=10;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if (count==2)
        printf("%d\t",i);
    }
    
}

void test6(){
    int sm,gr,num[5],sgr;
    for(int i=0;i<5;i++){
        printf(" enter values: ");
        scanf("%d",&num[i]);
    }
        
        gr =num[0];
        sm = num[0];

        for( int i=1;i<5;i++){

            if(num[i]>gr)
                gr=num[i];
            if(num[i]<sm)
                sm=num[i];
        }

         sgr=sm;
         for (int i = 1; i < 5; i++)
        {
            if(num[i]!=gr&&num[i]>sm)
                sgr=num[i];
        }

        

        printf("%d",sgr );
    
}    

void test7(){
    int i,j,k,a[2][3],b[3][4],c[2][4];

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
          printf("Enter values: ");
          scanf("%d\t",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Enter values: " );
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
        printf("%d",c[i][j] );
    }
    
   printf(" Is the matrix:\n");
   for(i=0;i<2;i++){
    for(j=0;j<4;j++){
        printf("%d\t",c[i][j] );
    }
    printf("\n");
   }

}
void test8(){
    //determinant:
 int i,j,c,r,a[5][5],t[5][5];
     
     printf("Enter r and c:" );
     scanf("%d%d",&r,&c);

     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the values:" );
            scanf("%d",&a[i][j]);
        }
     }

     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j] );
        }

     }

     for(i=0;i<r;i++){
        for(i=0;j<c;j++){
            t[j][i]=a[i][j];
        }
     }
     
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",t[i][j] );
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
    test8();
    //test9();
    //test10();
    //test11();
    //test12();
    //test13();
    //test14();
    //test15();
    return 0;
}