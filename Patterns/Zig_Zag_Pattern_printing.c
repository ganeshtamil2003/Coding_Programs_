#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int a[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x=0;
    while(x<=(n1*n2)){
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(i+j==x){
                    if(x%2==1){
                        printf("%d ",a[i][j]);
                    }
                    else{
                        printf("%d ",a[j][i]);
                    }
                }
            }
        }
        x++;
    }
    return 0;
}
