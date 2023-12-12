import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int rev=reverse(num);
        System.out.println(rev);
        
    }
    public static int reverse(int n){
        int r,sum=0;
        while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n/=10;
        }
        return sum;
    }
}