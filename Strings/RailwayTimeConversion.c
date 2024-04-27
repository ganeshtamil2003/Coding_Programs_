#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h,m,s;
    char ch[2];
    scanf("%d:%d:%d%c",&h,&m,&s,ch);
    if(h==12 && ch[0]=='A'){
        h=0;
    }else if(h!=12 && ch[0]=='P'){
        h=(h+12)%24;
    }
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}