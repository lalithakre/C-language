#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int d,sum=a+b+c;
  if(n==1)
  {
      printf("%d",a);
  }
  else if (n==2)
  {
      printf("%d",b);
  }
  else if(n==3)
  {
      printf("%d",c);
  }
  else 
  { 
    while (n>=5)
  {
     b=c;
     c=sum;
     sum=sum+b+c;      
  }
  printf("%d",sum);
  }
  return (0);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    find_nth_term(n, a, b, c);
    
   // printf("%d", ans); 
    return 0;
}
