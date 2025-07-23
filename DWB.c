#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define SIZE 1000

int main() {
    char notes[MAX][SIZE];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== C Notebook =====\n");
        printf("1. Add a Note\n");
        printf("2. View All Notes\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 1) {
            printf("Enter your note: ");
            fgets(notes[count], SIZE, stdin);
            notes[count][strcspn(notes[count], "\n")] = '\0';
            printf("Note added!\n");
        } else if (choice == 2) {
            printf("\n===== Your Notes =====\n");
            for (int i = 0; i < count; i++) {
                printf("%d. %s\n", i + 1, notes[i]);
            }
        } else if (choice == 3) {
            printf("Peace out!\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
