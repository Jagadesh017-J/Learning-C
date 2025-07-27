#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  

    for (i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];  
        }
    }
    str[j] = '\0'; 
    printf("String without spaces: %s\n", str);

    return 0;
}
