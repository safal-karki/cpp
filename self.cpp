#include <stdio.h>
void test(){
  
    
 
}

void test2(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int mid = n / 2;
    for (int i = 0 ; i < n - 1 ; i++){
        for (int j = i + 1; j < n ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   

    printf("%d\n",arr[mid]);

}
void test3(){
   

}

void test4(){
   
}

void test5(){
//wap to arrange jpt elements of array in order.
      int a[10],temp;
      printf("Before sorting:\n");
      printf("ENter values:\n");

       for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
       }

        for(int i=0;i<9;i++)
        {
            for(int j=i+1;j<10;j++) 
            {
                    if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                
            }
        }
        printf("Sorted:\n");
       for(int i=0;i<10;i++){
        printf("%d",a[i] );
       }

        }
       

int main(int argc, char const *argv[])
{
    
    test();
    //test2();
    test3();
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