import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n1=sc.nextInt();
    int n2=sc.nextInt();
    for(int i=n1;i<=n2;i++){
        if(isPrime(i)==0){
            System.out.print(i+" ");
        }
    }
    }
    public static int isPrime(int n){
        for(int j=2;j<n/2;j++){
            if(n%j==0)
                return 0;
        }
        return 1;
    }
}