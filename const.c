#include<stdio.h>
main(){
	int r;
	const float pi=3.14;
	float total;
	
	printf("enter the r value :- ");
	scanf("%d",&r);
	
	total=pi*(r*r);
	
	printf("value of circle :- %.2f",total);		
}