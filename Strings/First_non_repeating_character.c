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
    
   //starting array wise
    for(int i=0;i<len;i++){
        int p=str[i]-'a';
        if(count[p]==1)
        {
            printf("%c",str[i]);
            break;
        }
    }
    return 0;
}
