#include<stdio.h>
int main()
{    
  int r,sum=0,temp;    
  int n;
  printf("Enter number to check palingdrom:");
  scanf("%d",&n) ;
  temp=n;    
  while(n>0)
  {    
   r=n%10;  
   sum=(sum*10)+r;    
   n=n/10;    
  }    
  if(temp==sum)    
   printf("palindrome number ");    
  else    
   printf("not palindrome");    
}  
 