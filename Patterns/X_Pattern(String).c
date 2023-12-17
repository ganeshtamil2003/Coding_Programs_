#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i==j || i+j==len-1)
                printf("%c",str[j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
