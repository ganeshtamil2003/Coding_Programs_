
#include <stdio.h>
void printPattern(int n);
int main() {
    int n;
    scanf("%d",&n);
    printPattern(n);
    return 0;
}

void printPattern(int n){
int h=0;
int row =2*n-1;
int col =2*n-1;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(i<=(row/2)){
            if(j==h){
                for(int q=1;q<=(n-i);q++){
                    printf("%d",q);
                    printf(" ");
                }
                h++;
                printf("\n");
                if(i==row/2){
                h=(row/2)-1;
                }
                break;
            }
            else{
                printf(" ");
            }
            
        }
        else{
            if(j==h){
                for(int q=1;q<=i-(n-2);q++){
                    printf("%d",q);
                    printf(" ");
                }
                h--;
                printf("\n");
                break;
            }
            else{
                printf(" ");
            }
            
        }
    }
}
}


