#include <stdio.h>
int main() {
    int amount,thou,fhund,ohun,fifty,twenty,ten,five,two,one;

    printf("ENTER AMOUNT\n");
    scanf("%d",&amount);
    thou=amount/1000;
    printf("1000 NOTES=%d\n",thou);
    fhund=(amount%1000)/500;
    printf("500 NOTES=%d\n",fhund);
    ohun=((amount%1000)%500)/100;
    printf("100 NOTES=%d\n",ohun);
    fifty=((((amount%1000)%500)%100)/50);
    printf("50 NOTES=%d\n",fifty);
    twenty=((((amount%1000)%500)%100)%50)/20;
    printf("20 NOTES=%d\n",twenty);
    ten=((((amount%1000)%500)%100)%50)%20/10;
    printf("10 NOTES=%d\n",ten);
    five=((((amount%1000)%500)%100)%50)%20%10/5;
    printf("5 coins=%d\n",five);
    two=((((amount%1000)%500)%100)%50)%20%10%5/2;
    printf("2 coins=%d\n",two);
    one=((((amount%1000)%500)%100)%50)%20%10%5%2/1;
    printf("1 coins=%d\n",one);
    return 0;
}
