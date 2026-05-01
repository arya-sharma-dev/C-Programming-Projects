#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int isPalindrome = 1; 

    printf("Enter a string: ");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}
