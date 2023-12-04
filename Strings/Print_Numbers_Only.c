#include <stdio.h>
#include <ctype.h>

//prototype declaration
void printNumbers(char str[]);
int main() {
    char str[100];
    scanf("%s",str);
    printNumbers(str);
    return 0;
}

void printNumbers(char str[]){
    for (int i=0;str[i];i++) {
        if (isdigit(str[i])) {
            printf("%c", str[i]);
        }
    }
}