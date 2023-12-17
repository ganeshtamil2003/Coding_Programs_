#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n1=0;
int n2=0;
void eachRowMinimum(int a[][n2]);
//main
int main() {
    scanf("%d %d",&n1,&n2);
    int a[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    eachRowMinimum(a);
    return 0;
}
void eachRowMinimum(int a[][n2]){
    for(int i=0;i<n1;i++){
        int min=a[i][0];
        for(int j=1;j<n2;j++){
            if(a[i][j]<min)
                min=a[i][j];
        }
        printf("%d ",min);
    }
}
