#include <stdio.h>

int main() {
    int Target = 7;
    int Arr[] = {4 , 2 ,1 ,5};
    int i = 0, j = 3; 

    for (i = 0; i < 4; i++) {
        for (j = 3; j > i; j--) {
            if (Arr[i] + Arr[j] == Target) {
                printf("%d %d" , Arr[i], Arr[j]);
                return 0;
            }
        }
    }
}