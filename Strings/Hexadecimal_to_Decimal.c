#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int val=0,hex=0,power=0;
    for(int i=len-1;i>=0;i--){
        int x=10;
        if(str[i]>='A' && str[i]<='F'){
            val=(int)str[i];
            val=x+(val-65);
        }else{
             val=(int)str[i]-48; 
        }
        hex+=val*pow(16,power);
        power++;
    }
    printf("%d",hex);
    return 0;
}