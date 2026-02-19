#include<stdio.h>

int main(){
	int i,n,c,r,s=0;
	
	printf("Enter no : ");
	scanf("%d",&n);
	c=n;
	
	while(n!=0){
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	printf("\nReult is : %d",s);
	
	if(s==c){
		printf("\nAmstorng");
	}else{
		printf("\nNot");
	}
}
