#include <stdio.h>
#include <string.h>
struct Student {
    int rollno;
    char name[50];
    float marks[3]; 
};

int main() {
    struct Student s[25];
    int i, j;
    printf("Enter details for 25 students:\n");
    for (i = 0; i < 25; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        getchar(); 
        printf("Name: ");
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0; 

        for (j = 0; j < 3; j++) {
            printf("Marks in Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
    }
    printf("\n--- Students failed in more than one subject ---\n");
    printf("%-10s %-20s\n", "Roll No", "Name");
    printf("----------------------------------------------\n");

    int found = 0;
    for (i = 0; i < 25; i++) {
        int failCount = 0;
        for (j = 0; j < 3; j++) {
            if (s[i].marks[j] < 40.0) {
                failCount++;
            }
        }

        if (failCount > 1) {
            printf("%-10d %-20s\n", s[i].rollno, s[i].name);
            found = 1;
        }
    }

    if (!found) {
        printf("No students failed in more than one subject.\n");
    }

    return 0;
}
