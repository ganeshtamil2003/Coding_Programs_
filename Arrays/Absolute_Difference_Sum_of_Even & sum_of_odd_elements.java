import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int[] arr=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        odd+=odd(arr[i]);
        even+=even(arr[i]);
    }
    System.out.println(Math.abs(odd-even));         
    }
    public static int odd(int n){
        if(n%2!=0){
            return n;
        }
        return 0;
    }
    public static int even(int n){
        if(n%2==0){
            return n;
        }
        return 0;
    }
}