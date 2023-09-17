
#include <stdio.h>
int square(int);

int main()
{
  int a,sqr;
  printf("Enter value for a:");
  scanf("%d",&a);
  sqr=square(a);
  return sqr;
  printf("%d is square of a\n",sqr );
}
int square(int x)
{
  int s;
  s=x*x;
printf("%d is square\n",s );
  return 0;
  
}

