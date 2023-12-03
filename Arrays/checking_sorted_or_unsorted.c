
#include <stdio.h>

int main()
{
    int n,flag;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("Given Array is Sorted");
    }
    else{
        printf("Given Array is Unsorted");
    }
    return 0;
}
