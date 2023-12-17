#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n=0;
int absOfDiagnols(int a[][n]);
//main
int main(){
scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int res=absOfDiagnols(a);
    printf("%d",res);
    return 0;
}
int absOfDiagnols(int a[][n]){
    int main_diagonal=0;
    int second_diagonal=0;
    for(int i=0;i<n;i++){
        main_diagonal+=a[i][i];
        second_diagonal+=a[n-i-1][i];
    }
    return abs(main_diagonal-second_diagonal);
} 
