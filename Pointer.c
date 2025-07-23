#include <stdio.h>

int main() {
    printf("Pointers \n");
    int a = 69;
    int* ptr = &a;
    int* ptr2;
    int* ptr3 = NULL;
    printf("Value of a: %d\n", *ptr);
    printf("Add of a: %p\n" , &a);
    printf("Add of a: %p\n", ptr);
    printf("Value of a: %d\n" , a);
    printf("Value of a: %d\n" , *ptr);
    printf("Add of some garbage value: %p\n", ptr2);
    printf("Value of ptr3: %p\n", ptr3);
    return 0;
}

/*Null pointer : It contains a null value, which means it points to nothing.
*/
