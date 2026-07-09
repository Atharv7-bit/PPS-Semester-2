#include <stdio.h>
int main() {
    int arr[5];
    int even[5], odd[5];
    int even_count = 0, odd_count = 0;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count] = arr[i];
            even_count++;
        } else {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }
    printf("\nEven numbers (%d): ", even_count);
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers (%d): ", odd_count);
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
