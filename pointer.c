#include<stdio.h>
int main()
{
    int a,*b;
    scanf("%d",&a);
    printf("%d\n",a);
    b=&a;
    printf("%d\n",b);
    printf("%d\n",*b);
}