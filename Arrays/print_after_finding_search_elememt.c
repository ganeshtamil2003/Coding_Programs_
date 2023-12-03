#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s;
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(a[i]==s){
            printf("%d",a[i+1]);
        }
    }
    
    return 0;
}
