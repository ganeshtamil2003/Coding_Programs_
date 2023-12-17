#include <stdio.h>
void print(int n);

int main() {
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}

void print(int n){
    int h=n-1;
    int sum=1;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n-1);j++){
            if(j==h && flag==0){
                for(int q=sum;q<sum+n;q++){
                    printf("%d\t",q);
                }
                sum+=n;
                h--;
                flag=1;
                break;
            }
            else if(j==h && flag==1){
                for(int q=sum+n-1;q>=sum;q--){
                    printf("%d\t",q);
                }
                flag=0;
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