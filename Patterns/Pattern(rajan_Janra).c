#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]s",str);
    char a[100];
    int len=strlen(str);
    for(int i=len/2,j=0;i<len;i++,j++){
        a[j]=str[i];
    }
    for(int i=0,j=(len/2)+1;i<len/2;i++,j++){
        a[j]=str[i];
    }
    int column=len*2-1;
    int h=column-1;
    for(int i=0;i<len;i++){
        for(int j=0;j<column;j++){
            if(j==h){
                for(int q=0;q<=i;q++){
                    printf("%c",a[q]);
                }
                break;
            }
            else{
                printf(" ");
            }
        }
        h=h-2;
        printf("\n");
    }
    
    return 0;
}
