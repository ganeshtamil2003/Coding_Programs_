#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//function
void rotate(int n, int A[n][n]) {
    for(int i = n-1 ; i>=0 ; i--){
        for(int j = n-1 ; j>=0 ; j--){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

//main
int main() {
    int num;
    scanf("%d",&num);
    int b[num][num];
    for (int i =0;i<num;i++){
        for (int j = 0;j<num;j++){
            scanf("%d",&b[i][j]);
        }
    }   
    rotate(num,b);
    return 0;
}