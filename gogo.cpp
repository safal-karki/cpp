#include <stdio.h>
void test(){
    //transpose of matrix
 int i,j,r,c,a[10][10],t[10][10];
 printf("Enter rows and columns: ");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("Enter rows and columns" );
        scanf("%d",&a[i][j]);
    }
 }
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        t[j][i]=a[i][j];
    }
 }

 printf("Transpose: \n");
 for(i=0;i<c;i++){
    for(j=0;j<r;j++){
        printf("%d\n",t[i][j] );
    }
    printf("\n");
 }

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
    return 0;
}