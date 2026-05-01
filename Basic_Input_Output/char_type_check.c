#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (isalpha(ch)) {
        printf("'%c' is an ALPHABET.\n", ch);
    } 
    else if (isdigit(ch)) {
        printf("'%c' is a DIGIT.\n", ch);
    } 
    else {
        printf("'%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}
  
