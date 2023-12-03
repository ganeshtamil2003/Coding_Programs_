

#include <stdio.h>
void finding_k_minimum(int n,int a[],int k){
    for(int i=0;i<k;i++){
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
    int n,k;
    printf("Enter the Value Of N:");
    scanf("%d",&n);
    printf("Enter the Array Element\n");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the k Value:");
    scanf("%d",&k);
    finding_k_minimum(n,a,k);
    printf("kth Minimum Element is : %d",a[k-1]);
    return 0;
}
