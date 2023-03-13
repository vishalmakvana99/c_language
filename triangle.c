#include<stdio.h>
main(){
	float base,hieght,area;
	
	printf("Enter base of triangle:- ");
	scanf("%f",&base);
	
	printf("Enter hieght of triangle:- ");
	scanf("%f",&hieght);
	
	area=0.5*base*hieght;
	printf("Area of triangle= %.0f",area);
}