#include <stdio.h>
 
#define PI 3.14f
 
int main()
{
    float rad,perm;
 
    printf("Enter radius of circle: ");
    scanf("%f",&rad);
 
    perm=2*PI*rad;
 
    printf("Perimeter of circle: %.3f\n",perm);
    return 0;
}