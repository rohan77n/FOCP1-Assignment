// Q16;-insert element at front, middle, end of array
#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos, value;

    printf("Array before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nWhere do you want to insert the new element?\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice (1/2/3): ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    if (pos == 1) {
        for (i = n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = value;
        n++;
    } 
    else if (pos == 2) {
        int mid = n / 2;
        for (i = n; i > mid; i--) {
            arr[i] = arr[i - 1];
        }
        arr[mid] = value;
        n++;
    } 
    else if (pos == 3) {
        arr[n] = value;
        n++;
    } 
    else {
        printf("\nInvalid choice! No insertion done.\n");
        return 0;
    }

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
