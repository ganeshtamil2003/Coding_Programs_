#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int num;
    scanf("%d", &num);
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        
        if (ch >= 'a' && ch <= 'z') { // Handling lowercase letters
            ch = 'a' + (ch - 'a' + num) % 26;
        } else if (ch >= 'A' && ch <= 'Z') { // Handling uppercase letters
            ch = 'A' + (ch - 'A' + num) % 26;
        }
        
        printf("%c", ch);
    }
    return 0;
}
