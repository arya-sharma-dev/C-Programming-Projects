#include <stdio.h>
#include <ctype.h>

int main() {
    char letter;
    printf("Enter a lowercase letter: ");
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z') {
        char upper = toupper(letter);
        printf("The uppercase version is: %c\n", upper);
    } 
    else if (letter >= 'A' && letter <= 'Z') {
        printf("The letter is already uppercase: %c\n", letter);
    } 
    else {
        printf("Error: That is not an alphabetic letter.\n");
    }

    return 0;
}
