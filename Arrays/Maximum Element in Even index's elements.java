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
    int max=arr[0];
     for(int i=2;i<n;i=i+2){
         max=Math.max(arr[i],max);
     }
        System.out.print(max);
    }
}