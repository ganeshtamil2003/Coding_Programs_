// A carry is a digit that is transferred to left if sum of digits exceeds 9 while adding two
// numbers from right-to-left one digit at a time
// You are required to implement the following function.
// Int NumberOfCarries(int num1, int num2);`
// The functions accepts two numbers 'num1' and 'num2' as its arguments. You are
// required to calculate and return the total number of carries generated while adding
// digits of two numbers 'num1' and 'num2'.
// Assumption: num1, num2>=0

// Example:
// Input
// Num 1: 451
// Num 2: 349

// Output
// 2


import java.util.*;
class random2{
    public int NumberOfCarries(int num1,int num2){
        int count=0;
        int carry=0;
        while(num1>0 && num2>0){
            int sum=(num1%10)+(num2%10)+carry;
            carry=sum/10;
            if(carry==1)
                count++;
            num1/=10;
            num2/=10;
        }
        while(num1>0){
            int sum=(num1%10)+carry;
            carry=sum/10;
            if(carry==1)
                count++;
            num1/=10;
        }
        while(num2>0){
            int sum=(num2%10)+carry;
            carry=sum/10;
            if(carry==1)
                count++;
            num2/=10;
        }
        return count;
    }
    public static void main(String args[]){
        random2 obj=new random2(); 
        Scanner sc=new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        
        int result=obj.NumberOfCarries(num1,num2);
        System.out.print("Number of Carries: "+result);
    }
}