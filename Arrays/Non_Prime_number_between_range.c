#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        if (i==0 || i==1){
            printf("%d ", i);
        }
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                printf("%d ",i);
                break;
            }
        }   
    }
    return 0;
}
