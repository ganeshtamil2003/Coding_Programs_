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
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            c++;
        }
    }
    printf("%d",c);
}
    