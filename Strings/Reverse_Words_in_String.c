#include <stdio.h>
#include <string.h>
void reverseWords(char x[]) {
    int len = strlen(x);
    int count = 0;
    for (int i =len-1;i>=0;i--) {
        if (x[i]!=' ') {
            count++;
        } 
        else{
            for(int j =i+1;j<=(i + count);j++) {
                printf("%c",x[j]);
            }
            printf(" ");
            count = 0;
        }
    }
    for (int i=0;x[i];i++) {
        if (x[i]!=' ')
            printf("%c",x[i]);
        else
            break;
    }
}
int main() {
    char x[100];
    scanf("%[^\n]s", x);
    reverseWords(x);
    return 0;
}