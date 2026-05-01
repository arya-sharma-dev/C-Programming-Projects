#include <stdio.h>

int main() {
    char str[100], sub[100];
    int i, j, found = 0;


    printf("Enter the main string: ");
    gets(str); 

    printf("Enter the substring to find: ");
    gets(sub);

  
    for (i = 0; str[i] != '\0'; i++) {

        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (sub[j] == '\0') {
            printf("Substring found at starting position: %d\n", i + 1);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Substring not found.\n");
    }

    return 0;
}
