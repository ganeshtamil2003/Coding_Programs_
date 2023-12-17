#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n=0;
void eachRowMaximum(int a[][n]);
//main
int main(){
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    eachRowMaximum(a);
    return 0;
}
void eachRowMaximum(int a[][n]){
    for(int i=0;i<n;i++){
        int max=a[i][0];
        for(int j=1;j<n;j++){
            if(a[i][j]>max)
                max=a[i][j];
        }
        printf("%d\n",max);
    }
}
