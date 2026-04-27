# include <stdio.h>
int main(){
	int num,rem;
	printf("enter number:\t");
	scanf("%d",&num);
	
	rem=num%2;
	if(rem==0){
		printf("\n given number is EVEN");
	}
	else{
		printf("\n given number is ODD");
	}
	return 0;
}

