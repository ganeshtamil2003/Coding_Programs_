import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int s=fact(n);
        System.out.println(s);
    }
    public static int fact(int n){
        if(n==0)
            return 1;
        else
            return fact(n-1)*n;
    }
}