#include <stdio.h> // header file includes every Standard library
int main() 
{
	int a,b,c;
	printf("enter the numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&b==c)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}	
}