#include <stdio.h>
int findFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * findFactorial(n - 1);
}
int main() {
    int num;
    printf("Enter a positive whole number: ");
    scanf("%d", &num);
    int answer = findFactorial(num);
    printf("The factorial of %d is: %d\n", num, answer);
    return 0;
}
