import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String args[] ) throws Exception {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int[] arr=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }
    for(int i=0;i<n;i++){
        if(!isPrime(arr[i])){
            System.out.print(arr[i]+" ");
        }
    }
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            System.out.print(arr[i]+" ");
        }
    }    
    }
    //Method
    public static boolean isPrime(int n){
        if(n<=1){
            return false;            
        }
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}