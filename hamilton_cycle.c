#include<stdio.h>
#include<conio.h>
#define MAX 25
// Lalit thakre               enroll. nom. : 0536CS201016
int x[MAX];
void Next_Vertex(int G[MAX][MAX],int n,int k)
{
 int j;
 while(1)
 {
  //obtain next vertex
  x[k]=(x[k]+1)%(n+1);
  if(x[k]==0)
   return;
  if(G[x[k-1]][x[k]]!=0)
  { //if edge between k and k-1 is present
   for(j=1;j<=k-1;j++)//every adjacent vertex
   {
    if(x[j]==x[k])//not a distinct vertex
     break;
   }
   if(j==k) //obtain a distinct vertex
   {
    if((k<n)||((k==n)&&(G[x[n]][x[1]]!=0)))
     return;//return a distinct vertex
   }
  }
 }
}
void H_Cycle(int G[][MAX],int n,int k)
{
 int i;
 while(1)
 {
  Next_Vertex(G,n,k);//generates next legal vertex for determining cycle
  if(x[k]==0)
   return;

  if(k==n)
  {
   printf("\n");
   for(i=1;i<=n;i++)
    printf(" %d",x[i]);  //printing Hamiltonian cycle
   printf(" %d",x[1]);
  }
  else
   H_Cycle(G,n,k+1);
 }
}
void main()
{
 int i,j,v1,v2,Edges,n,G[MAX][MAX];
 //clrscr();
 printf("\t: Lalit thakre : \n");
 printf("\n\t Program for Hamiltonian Cycle ");
 printf("\n\t Enter the number of vertices of graph: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   G[i][j]=0;
   x[i]=0;
  }
 }
 printf("\n\t Enter the total number of edges: ");
 scanf("%d",&Edges);
 for(i=1;i<=Edges;i++)
 {
  printf("\n Enter the edge: ");
  scanf("%d%d",&v1,&v2);
  G[v1][v2]=1;
  G[v2][v1]=1;
 }

 x[1]=1;
 printf("\n Hamiltonian cycle ...\n");
 H_Cycle(G,n,2);
 getch();
}
