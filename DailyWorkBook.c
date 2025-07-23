#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    while (1) {
        printf("How was your day? ");
        fgets(a, sizeof(a), stdin);
        a[strcspn(a, "\n")] = '\0';

        if (strcmp(a, "Done") == 0) {
            printf("Exiting the program.\n");
            break;
        } else {
            printf("%s\n", a);
        }
    }

    return 0;
}