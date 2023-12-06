#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n=0;
void innerSpiral(int n,int ar[][n]);
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    }
    innerSpiral(n,a);
    return 0;
}
void innerSpiral(int n,int ar[][n]){
    int a=0,b=n-1,c=0,d=n-1;
    while(a<=b && c<=d){
        for(int i=a;i<=b;i++){
            printf("%d ",ar[c][i]);
        }
        c++;
        for(int i=c;i<=d;i++){
            printf("%d ",ar[i][b]);
        }
        b--;
        for(int i=b;i>=a;i--){
            printf("%d ",ar[d][i]);
        }
        d--;
        for(int i=d;i>=c;i--){
            printf("%d ",ar[i][a]);
        }
        a++;
    }
}
