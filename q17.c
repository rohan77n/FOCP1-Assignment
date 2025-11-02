// Q17;-delete element from front, middle, end of array
#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos;

    printf("Array before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nWhere do you want to delete the element?\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice (1/2/3): ");
    scanf("%d", &pos);

    if (pos == 1) {
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } 
    else if (pos == 2) {
        int mid = n / 2;
        for (i = mid; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } 
    else if (pos == 3) {
        n--;
    } 
    else {
        printf("\nInvalid choice! No deletion done.\n");
        return 0;
    }

    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
