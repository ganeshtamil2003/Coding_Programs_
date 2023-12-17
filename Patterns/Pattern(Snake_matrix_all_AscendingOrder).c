#include <stdio.h>
void printPattern(int n);

int main() {
    int n;
    scanf("%d",&n);
    printPattern(n);
    return 0;
}

void printPattern(int n){
    int h=n-1;
    int sum=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n-1);j++){
            if(j==h){
                for(int q=sum;q<sum+n;q++){
                    printf("%d\t",q);
                }
                sum+=n;
                h--;
                break;
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}