#include <stdio.h>

int main() {
	// your code goes here
	int num,a,b;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    scanf("%d%d",&a,&b);
	    if(a<b)
	    printf("FIRST\n");
	    else if(b<a)
	    printf("SECOND\n");
	    else
	    printf("ANY\n");
	}
	return 0;
}

