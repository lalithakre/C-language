#include<stdio.h>
void main()
{
 int temp,i,j,k,b[10];
 int a[]={18,12,15,14,16,17,19,11,10,13};
 printf("Your original sorting is:-\n");
 for(i=0;i<10;i++)
 {
  printf(" %d ",a[i]);
 }
 printf("\n After Sorting:-\n");
 for(i=0;i<10;i++)
 {
  for(j=0;j<10-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 for(i=0;i<10;i++)
 {
  printf(" %d ",a[i]);
 }
 printf("\n After Alternative Sorting:-\n");
 for(i=0,k=0,j=9;i<=j;i++,k++,j--)
 {
  b[k]=a[i];
  k++;
  b[k]=a[j];
 }
 for(i=0;i<10;i++)
 {
  printf(" %d ",b[i]);
 }
}
