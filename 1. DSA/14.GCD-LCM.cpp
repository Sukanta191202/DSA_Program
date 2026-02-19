#include<stdio.h>

int main(){
	int i,m,n,gcd=0,lcm=0;
	printf("Two number : ");
	scanf("%d%d",&m,&n);
	
	for(i=1;i<m && i<n;i++){
		if(m%i == 0 && n%i == 0)
			gcd = i;
	}
	
	lcm = (m*n)/gcd;
	
	printf("\nGCD :%d",gcd);
	printf("\nLCM :%d",lcm);
	return 0;
}
