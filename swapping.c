#include <stdio.h>

int main()
{
int a,b;
printf("enter two numbers to swap \n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the numbers after swapping %d\n %d\n",a,b);
return 0;
}
