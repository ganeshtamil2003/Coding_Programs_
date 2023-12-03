

#include <stdio.h>

int bubbleSort(int n,int a[]){
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
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubbleSort(n,a);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
