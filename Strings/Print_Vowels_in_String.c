#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]s",str);
    int len=strlen(str);
    //int count[26]={0};
    for(int i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){
            char m=str[i]+32;
            if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u'){
                printf("%c",m);
            }
        }
        else{
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                printf("%c",str[i]);
            }    
        }
    }    
    return 0;
}    
