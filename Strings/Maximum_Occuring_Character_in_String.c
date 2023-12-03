#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]s",str);
    int len=strlen(str);
    int count[26]={0};
    for(int i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){
            char m=str[i]+32;
            //int h=(int)m-(int)'a';
            count[m-'a']++;
        }
        else{
        //int h=(int)str[i]-(int)'a';
        count[str[i]-'a']++;
        }    
    }
    int maxCount=0;
    char maxChar;
    for(int i=0;i<26;i++){
        if(count[i]>maxCount){
            maxCount=count[i];
            maxChar=i+'a';
        }
    }
    
    printf("%c",maxChar);
    return 0;
}
