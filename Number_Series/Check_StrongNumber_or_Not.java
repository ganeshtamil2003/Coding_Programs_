import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(checkStrongNumber(n))
            System.out.println("Given number is a strong number");
        else
            System.out.println("Given number is not a strong number");
    }
    public static int fact(int n){
        if(n==0)
            return 1;
        else
            return fact(n-1)*n;
    }
    public static boolean checkStrongNumber(int n){
        int originalDigit=n;
        int r,sum=0;
        while(n!=0){
        r=n%10;    
        sum+=fact(r);
        n/=10;
        }
        return originalDigit==sum;
    }
}