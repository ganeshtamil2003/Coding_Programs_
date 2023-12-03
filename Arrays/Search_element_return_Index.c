

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s,index=-1;
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(a[i]==s){
            index=i;
            break;
        }
    }
    printf("%d ",index);

    return 0;
}
