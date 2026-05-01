#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    char temp;

    printf("Enter a string: ");
   
    scanf("%[^\n]s", str); 

    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
       
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
