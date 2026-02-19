#include<stdio.h>

int main(){
	int i,j,n,temp;
	printf("How many number of element you want : ");
	scanf("%d",&n);
	int a[n];
	
	printf("\nEnter number of element one by one : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++){
		for(j=i;j>=1;j--){
			if(a[j-1] > a[j]){
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nSorted array is : ");
	for(i=0 ;i<n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
