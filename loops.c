#include <stdio.h>

int main()
{
int i,j,num;
printf("enter how many stairs u need \n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("01");
    }
    printf("\n");
}
return 0;
}
