#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//prototype declaration
int automorphic(int num);

//main
int main() {
    int n;
    scanf("%d",&n);
    if(automorphic(n)==1){
        printf("Given number is Automorphic number");
    }
    else{
        printf("Given number is not an Automorphic number");
    }
    return 0;
}

//function
int automorphic(int num){
    int square=num*num;
    while(num!=0){
        if(num%10 != square%10){
            return 0;
            break;
        }
        num/=10;
        square/=10;
    }
    return 1;
}
