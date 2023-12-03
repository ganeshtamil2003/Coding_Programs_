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
    int min=a[0],ind=0;
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            ind=i;
        }
    }
    printf("%d",a[ind+1]);
    return 0;
}
