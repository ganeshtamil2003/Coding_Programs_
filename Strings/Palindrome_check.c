#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]s",str);
    int len=strlen(str);
    int flag=0;
    for(int i=0,j=len-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            flag++;
            break;
        }
    }
    if(flag==0)
        printf("Given String is a palindrome");
    else
        printf("Given String is not a palindrome");
    return 0;
}
