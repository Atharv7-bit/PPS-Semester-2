#include <stdio.h>
int main()
{
	int a, b;
	printf("enter your marks: \n ");
	scanf("%d",&a);
	
	if(a>100){
		printf("GRADE: INVALID MARKS TRY AGAIN \n ");
	}
	else if(a>=90){
		printf("GRADE: EXCELLANT \n ");
	}
	else if(a>=80){
		printf("GRADE: A \n ");
	}
	else if(a>=70){
		printf("GRADE: B \n ");
	}
	else if(a>=60){
		printf("GRADE: C \n ");
	}
	else if(a>=50){
		printf("GRADE: D \n ");
	}
		else if(a>=40){
		printf("GRADE: D \n ");
	}

	else {	printf("GRADE:FAIL \n ");
	}
	return 0;
}


