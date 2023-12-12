import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(checkArmstrongNumber(n))
            System.out.println("Armstrong Number");
        else
            System.out.println("Not an Armstrong Number");

    }
    public static boolean checkArmstrongNumber(int n){
        int original_Num=n;
        int no_of_digits=String.valueOf(n).length();
        int r,sum=0;
        while(n!=0){
            r=n%10;
            sum+=Math.pow(r,no_of_digits);
            n/=10;
        }
        return original_Num==sum;
    }
}