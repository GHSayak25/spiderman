#include<stdio.h>
int main()
{
	float i,x,a,b,c;
	printf("Enter value of a: ");
	scanf("%f",&a);
	printf("Enter value of b: ");
	scanf("%f",&b);
	printf("Enter value of c: ");
	scanf("%f",&c);
	i=b-c;
	x=a/i;
	if(i==0)
	    printf("Value is undetermined");
	else    
	    printf("The calculated value will be %f",x);
	
	return 0;
	
}
