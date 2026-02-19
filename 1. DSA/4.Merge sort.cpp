#include <stdio.h>
void merge(int a[],int l,int m, int r);
void mergesort(int a[],int l,int r);
void printArray(int a[],int size);
int main()
 {
   int i,size;
   printf("Enter your array size\n");
   scanf("%d",&size);
   int a[size];
    printf("Enter element one by one\n");
   for(i=0;i<size;i++)
   {
     scanf("%d",&a[i]);
   }
   mergesort(a,0,size-1);
   printArray(a,size);
   return 0;
 }
void merge(int a[],int l, int m, int r)
{
  int i,j,k,n1,n2;
  n1=m-l+1;
  n2=r-m;
 int  L[n1],R[n2];
  for(i=0;i<n1;i++)
    {
      L[i]=a[l+i];
    }
  for(j=0;j<n2;j++)
    {
      R[j]=a[m+1+j];
    }
  i=0;
  j=0;
  k=l;
  while(i<n1 && j<n2)
    {
      if(L[i]<=R[j])
        {
          a[k]=L[i];
          i++;
        }
      else
        {
          a[k]=R[j];
          j++;
        }
      k++;
    }
  while(i<n1)
    {
      a[k]=L[i];
      i++;
      k++;
    }
  while(j<n2)
    {
      a[k]=R[j];
      j++;
      k++;
    }
}
void mergesort(int a[], int l, int r)
{
  if(l<r)
    {
      int m=l+(r-l)/2;
      mergesort(a,l,m);
      mergesort(a,m+1,r);
      merge(a,l,m,r);
    }
}
void printArray(int a[],int size)
{
  int i;
  printf("After sorting\n");
  for(i=0;i<size;i++)
    {
      printf("%d ",a[i]);
    }
  printf("\n");
}
