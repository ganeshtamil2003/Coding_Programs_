
#include <stdio.h>
void mergeSort(int n1,int n2,int a[],int b[]);
int main()
{   int n1,n2;
    scanf("%d %d",&n1,&n2);
    int a[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int b[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    mergeSort(n1,n2,a,b);
    return 0;
}
void mergeSort(int n1,int n2,int a[],int b[]){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            printf("%d ",a[i]);
            i++;
        }
        else if(b[j]<a[i]){
            printf("%d ",b[j]);
            j++;
        }
        else{
            printf("%d ",a[i]);
            i++;
            j++;
        }
    }
    while(i<n1){
        printf("%d ",a[i]);
        i++;
    }
    while(j<n2){
        printf("%d ",b[j]);
        j++;
    }
}
