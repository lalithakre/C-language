#include<stdio.h>
void main()
{
    //Lalit thakre           Enroll. nom. : 0536CS201016
 int i,k,a[10],c[10],n,l;
printf("Lalit thakre           Enroll. nom. : 0536CS201016\n");
 printf("Enter the no. of elements\t");
 scanf("%d",&n);
 printf("\nEnter the sorted elements for optimal merge pattern");
 for(i=0;i<n;i++)
 {
  printf("\t");
  scanf("%d",&a[i]);
 }
 i=0;k=0;
 c[k]=a[i]+a[i+1];
 i=2;
 while(i<n)
 {
  k++;
  if((c[k-1]+a[i])<=(a[i]+a[i+1]))
  {
  c[k]=c[k-1]+a[i];
  }
 else
  {
  c[k]=a[i]+a[i+1];
  i=i+2;
  while(i<n)
  {
   k++;
   if((c[k-1]+a[i])<=(c[k-2]+a[i])){c[k]=c[k-1]+a[i];
  }
  else
  {
   c[k]=c[k-2]+a[i];
  }
  i++;
 }
}
 i++;
 }
 k++;
 c[k]=c[k-1]+c[k-2];
 printf("\n\nThe optimal sum are as follows......\n\n");
 for(k=0;k<n-1;k++)
 {
  printf("%d",c[k]);
 }
 l=0;
 for(k=0;k<n-1;k++)
 {
  l=l+c[k];
 }
 printf("\n\n The external path length is ......",l);
}