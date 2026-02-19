#include<stdio.h>

int main(){
	int y;
	printf("Enter Year : ");
	scanf("%d",&y);
	if(y%100 == 0 && y%400 == 0 || y%100 != 0  && y%4 == 0){
		printf("leapyear");
	}else{
		printf("Not");
	}
   
	return 0;
}
