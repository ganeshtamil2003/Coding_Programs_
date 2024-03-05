#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int minimum(int n,int a[]);

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=minimum(n,a);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]=min;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    if(a[n-3]!=min)
        printf("%d",a[n-3]);
    else
     printf("No");
    return 0;
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
