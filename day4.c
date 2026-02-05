#include <stdio.h>

int main() {
    int n;

    // Read number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = n - 1;
    int temp;

    // Two-pointer approach
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
