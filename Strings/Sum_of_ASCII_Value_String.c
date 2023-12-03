#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]s",str);
    int count=0;
    for(int i=0;str[i];i++){
        count+=(int)str[i];
    }
    printf("%d",count);
    return 0;
}
