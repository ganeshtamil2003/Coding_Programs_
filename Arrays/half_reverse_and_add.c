#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Second_half(int n,int a[]);
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Second_half(n,a);
    return 0;
}
void Second_half(int n,int a[]){
    int mid=n/2,count=0;
    if(n%2!=0){
    for(int i=0;i<=mid;i++){
        printf("%d ",a[i]);
    }    
    for(int i=n-1;i>mid;i--){
        printf("%d ",a[i]);
    }
    }
    else{ 
    for(int i=0;i<mid;i++){
            printf("%d ",a[i]);
    }    
    for(int i=n-1;i>=mid;i--){
        printf("%d ",a[i]);
    }
    }
    for(int j=1;j<n;j=j+2){
            count+=a[j];
        }
     printf("\n%d",count);
}
