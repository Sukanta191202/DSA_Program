                             // Quick Sort
#include<stdio.h>
void quicksort(int a[],int low,int high)
{
   if(low<high)
    {
       int pivot,i,j,temp;
       pivot=a[high];
       i=low-1;
       for(j=low;j<high;j++)
        { 
          if(a[j]<pivot)
           {
             i++;
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }  
	    }
      temp=a[i+1];
      a[i+1]=a[high];
      a[high]=temp;
      quicksort(a,low,i);
      quicksort(a,i+2,high);
    }
}
int main()
{
   int i,n;
   printf("Enter your number:\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter element one by one:\n");
   for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("Sorted result is:");
    for(i=0;i<n;i++)
    {
      printf("%4d",a[i]);
    }
    return 0;
}
