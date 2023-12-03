#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//prototype declaration
int countDigits(int num);

int main() {
    int n;
    scanf("%d",&n); //input
    int totalCharacters=0;
    for (int i=1;i<=n;i++){
        totalCharacters +=countDigits(i); //finding count
    }
    printf("%d",totalCharacters);
    return 0;
}

int countDigits(int num) {
    int count = 0;
    while(num>0) {
        count++;
        num/=10;
    }
    return count;
}

