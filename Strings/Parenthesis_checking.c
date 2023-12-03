#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void parenthesesChecking(char a[]);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char a[100];
    scanf("%[^\n]s", a);
    parenthesesChecking(a);
    return 0;
}
void parenthesesChecking(char a[])
{
    int j=-1;
    char x[100]={'0'};
    for(int i=0;a[i];i++){
        if(a[i]=='(' || a[i]=='{' || a[i]=='['){
            j++;
            x[j]=a[i];
        }
        else{
            if((a[i]==')' && x[j]=='(') || (a[i]=='}' && x[j]=='{') || (a[i]==']'&& x[j]=='[')){
                j--;
            }
            else{
                break;
            }
        }
    }
    if(j==-1)
    {
        printf("Balanced");
    }
    else
    {
        printf("Not Balanced");
    }
}