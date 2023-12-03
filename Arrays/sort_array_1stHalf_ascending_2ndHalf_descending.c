#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort(int n,int a[]);
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(n,a);
    return 0;
}
void sort(int n,int a[]){
    int mid=n/2;
    if(n%2==0){
    //aes
    for(int i=0;i<mid;i++){
        for(int j=i+1;j<mid;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    //des
    for(int i=mid;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
    else{
        for(int i=0;i<=mid;i++){
        for(int j=i+1;j<=mid;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    //des
    for(int i=mid+1;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    }
 for(int i=0;i<n;i++){
     printf("%d ",a[i]);
 }   
}
