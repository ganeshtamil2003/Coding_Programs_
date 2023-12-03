#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k,a,b;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);
   
    //times rotate
    while(k!=0){
        int q=arr[0];
        for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=q;
        k--;
    }
    
    //index printing
    for(int i=a;i<=b;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
