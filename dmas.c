#include<stdio.h>
int main(){
	float num1,num2,sum,sub,mul,div;
	printf("enter first number;\t");
	scanf("%f",&num1);
	printf("enter second number;\t");
	scanf("%f",&num2); 
	sum=num1+num2;
	printf("\nthe addition of %f & %f is %f\t",num1,num2,sum);
	sub=num1-num2;
	printf("\nthe substraction of %f & %f is %f\t",num1,num2,sub);
	mul=num1*num2;
	printf("\nthe multiplication of %f & %f is %f\t",num1,num2,mul);	
	div=num1/num2;
	printf("\nthe division of %f & %f is %f\t",num1,num2,div);
	return 0;
}
	
