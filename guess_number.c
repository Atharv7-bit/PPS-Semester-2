#include <stdio.h>

int main() {
    int i,a,b=42;
    for(int i = 0; i < 5; i++) {
        printf("GUESS THE TWO DIGIT NUMBER\n:");
        scanf("%d", &a);
        if(a == b) {
            printf("\nCONGRATS! YOU GUESSED THE NUMBER\n");
            break;
        } else {
            if(i<4) {
                printf("\nWRONG GUESS! \n");
              
            }   
                else {
                    printf("\nYOU USED ALL YOUR CHANCES \n THE NUMBER WAS %d \n",b);
                }
        }
    }

    return 0;
}
