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
    int i=0,j=n-1;
    for(;i<j;i++,j--){
        printf("%d %d ",a[j],a[i]);
    }
    if(i==j){
    printf("%d",a[i]);
    }
    
    return 0;
}
void sort(int n,int a[]){
for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}