#include<stdio.h>

int main(){
	int n,r,c,t,s=0;
    printf("Enter no:");
    scanf("%d",&n);
    
    c=n;
    while(n!=0){
    	r=n%10;
    	s=s*10+r;
    	t=t+r;
    	n=n/10;
	}
	printf("\n Sum : %d",t);
	printf("\n Reverse : %d",s);
	
	if(s==c)
   {
	printf("\npalindrome");
	}    
	else{
		printf("\nNot palindrome");
	}
	return 0;
}
