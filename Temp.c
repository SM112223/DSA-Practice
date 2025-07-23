#include <stdio.h>

void Selection(int arr[], int n) {
    for (int i = 0 ; i < n-1 ; i++) {
        int min = i;
        for (int j = i+1 ; j < n ; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        // Swap outside inner loop
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        
    }
}

int main() {
    int arr[] = {12, 2, 33, 31, 111};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    Selection(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
