#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n1=0;
int n2=0;
void eachColumnMaximum(int a[][n2]);
//main
int main() {
    scanf("%d %d",&n1,&n2);
    int a[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    eachColumnMaximum(a);
    return 0;
}
void eachColumnMaximum(int a[][n2]){
    for(int j=0;j<n2;j++){
        int max=a[0][j];
        for(int i=1;i<n1;i++){
            if(a[i][j]>max)
                max=a[i][j];
        }
        printf("%d ",max);
    }
}
