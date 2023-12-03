#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
    int n=0;
    if(n1>n2)
        n=n1;
    else
        n=n2;
    int c[n];
    int k=0,balance=0,i=n1-1,j=n2-1;
    //1st condition
    while(i>=0 && j>=0){
        int q=a[i]+b[j]+balance;
        c[k]=q%10;
        balance=q/10;
        i--;
        j--;
        k++;
    }
    //2nd condition
    while(i>=0){
        int q=a[i]+balance;
        c[k]=q%10;
        balance=q/10;
        i--;
        k++;
    }
    //3rd condition
    while(j>=0){
        int q=b[j]+balance;
        c[k]=q%10;
        balance=q/10;
        j--;
        k++;
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",c[i]);
    }
    return 0;
}
