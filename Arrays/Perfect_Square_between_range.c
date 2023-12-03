#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void perfectSquare(int a,int b);
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    perfectSquare(a,b);
    return 0;
}
void perfectSquare(int a,int b){
    for(int i=a;i<=b;i++){
        int sqrt_num=sqrt(i);
        if(sqrt_num*sqrt_num==i){
            printf("%d ",i);
        }
    }
}
