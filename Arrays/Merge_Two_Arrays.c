#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maximum(int n,int a[]);
int minimum(int n,int a[]);

int main() {
    int n1,n2;
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    int b[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    
    int max1=maximum(n1,a);
    int max2=maximum(n2,b);
    int min1=minimum(n1,a);
    int min2=minimum(n2,b);
    int maxi=0,mini=0;
    if(max1>max2)
        maxi=max1;
    else if(max2>max1)
        maxi=max2;
    else
        maxi=max1;
    if(min1<min2)
        mini=min1;
    else if(min2<min1)
        mini=min2;
    else
        mini=min1;
    //array creation
    int c[maxi+1-mini];
    //zeros
    for(int i=0;i<(maxi+1-mini);i++){
        c[i]=0;
    }
    //hashing
    for(int i=0;i<n1;i++){
        c[a[i]-mini]++;
    }
    for(int i=0;i<n2;i++){
        c[b[i]-mini]++;
    }
    //result
    for(int i=0;i<(maxi+1-mini);i++){
        if(c[i]!=0){
            printf("%d ",i+mini);
            c[i]=0;
        }
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