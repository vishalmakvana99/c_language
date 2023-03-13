#include<stdio.h>
main(){
	int principal,time,rate,interest;
	
	printf("Enter the principal:- ");
	scanf("%d",&principal);
	
	printf("Enter the time:- ");
	scanf("%d",&time);
	
	printf("Enter the rate:- ");
	scanf("%d",&rate);
	
	interest=principal*time*rate/100;
	printf("Simple interest is =%d ",interest);
}