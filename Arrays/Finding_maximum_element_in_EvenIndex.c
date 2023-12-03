#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //getting inputs
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    //finding max element in even index
    int max=0;
    for(int i=0;i<n;i=i+2){
        if(a[i]>max){
            max=a[i];
        } 
    }
    
    //printing the max element.
    printf("%d",max);
    return 0;
}
