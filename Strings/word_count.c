#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int words = 0;
    int inWord = 0; 

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0; 
        } 
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
        i++;
    }

    printf("Total number of words: %d\n", words);

    return 0;
}
