#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char x[100];
    scanf("%[^\n]s",x);
    for(int i=0;x[i];i++){
        if(x[i]>='0' && x[i]<='9'){
            int q=x[i]-'0';
            int j=i+1;
            while(x[j]>='0' && x[j]<='9'){
                int h=x[j]-'0';
                q=(q*10)+h;
                j++;
            }
            for(int t=0;t<q;t++){
                printf("%c",x[i-1]);
            }
            i=j-1;
        }
    }
    return 0;
}
