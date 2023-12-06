#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum1+=a[i][i];
        sum2+=a[n-i-1][i];
    }
    printf("%d",abs(sum1-sum2));
    return 0;
}
