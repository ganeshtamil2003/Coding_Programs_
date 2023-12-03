#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maximum(int n,int a[]);
int minimum(int n,int a[]);

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=maximum(n,a);
    int min=minimum(n,a);
    
    int b[max+1-min];
    //zeros
    for(int i=0;i<(max+1-min);i++){
        b[i]=0;
    }
    //hashing
    for(int i=0;i<n;i++){
        b[a[i]-min]++;
    }
    //result
    int maxi=maximum(max+1-min,b);
    while(maxi!=0){
        for(int i=0;i<n;i++){
            if(b[a[i]-min]==maxi){
                for(int j=0;j<maxi;j++){
                    printf("%d ",a[i]);
                }
                b[a[i]-min]=0;
            }
        }
        maxi--;
    }
} 
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