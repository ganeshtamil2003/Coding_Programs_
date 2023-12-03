#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void reverse_First_and_Second_half(int n,int a[]);
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse_First_and_Second_half(n,a);
    return 0;
}
void reverse_First_and_Second_half(int n,int a[]){
    int mid=n/2;
    if(n%2!=0){
    for(int i=mid-1;i>=0;i--){
        printf("%d ",a[i]);
    }
        printf("%d ",a[mid]);
    for(int i=n-1;i>=mid+1;i--){
        printf("%d ",a[i]);
    }
    }
    else{
    for(int i=mid-1;i>=0;i--){
        printf("%d ",a[i]);
    }
        //printf("%d ",a[mid]);
    for(int i=n-1;i>=mid;i--){
        printf("%d ",a[i]);
    } 
    }
}
