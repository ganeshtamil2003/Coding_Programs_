#include <stdio.h>
#include <ctype.h>

//prototype declaration
void printSpecialCharacters(char str[]);

int main() {
    char str[100];
    scanf("%s",str);
    printSpecialCharacters(str);
    return 0;
}
//function
void printSpecialCharacters(char str[]) {
    for (int i = 0;str[i]; i++) {
        if (!isalnum(str[i]) && !isspace(str[i])) {
            printf("%c", str[i]);
        }
    }
}
