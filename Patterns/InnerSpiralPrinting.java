import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int[][] arr=new int[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=sc.nextInt();
        }
    }
    printInnerSpiral(arr,n);    
    }
    //Method
    public static void printInnerSpiral(int[][] arr,int n){
        int a=0,b=n-1,c=0,d=n-1;
        while(a<=b && c<=d){
            for(int i=a;i<=b;i++){
                System.out.print(arr[c][i]+" ");
            }
            c++;
            for(int i=c;i<=d;i++){
                System.out.print(arr[i][b]+" ");
            }
            b--;
            for(int i=b;i>=a;i--){
                System.out.print(arr[d][i]+" ");
            }
            d--;
            for(int i=d;i>=c;i--){
                System.out.print(arr[i][a]+" ");
            }
            a++;
        }
    }
}