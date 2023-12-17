#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n1=0;
int n2=0;
int checkIdentical(int a[][n1],int b[][n2]);
int main() {
    scanf("%d",&n1);
    int a[n1][n1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&n2);
    int b[n2][n2];
    for(int i=0;i<n2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int res=checkIdentical(a,b);
    if(res==0)
        printf("Identical");
    else
        printf("Not Identical");
    return 0;
}
int checkIdentical(int a[][n1],int b[][n2]){
    int c=0;
    for(int i=0;i<n1;i++){
        if(!(a[i][i]==b[i][i])){
            c++;
            break;
        }    
    }
    return c;
    
}