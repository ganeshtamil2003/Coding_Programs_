#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//prototype declaration
int minimum(int n,int a[]);
int maximum(int n,int a[]);

int main() {
    //getting inputs
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //finding max and min
    int max=maximum(n,a);
    int min=minimum(n,a);
    printf("%d",max/min);
    return 0;
}

//functions
int maximum(int n,int a[]){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int minimum(int n,int a[]){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}