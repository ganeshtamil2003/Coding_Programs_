import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String args[] ) throws Exception {
    Scanner sc=new Scanner(System.in);
    int n1,n2;
    n1=sc.nextInt();
    n2=sc.nextInt();
    int[] a=new int[n1];
    int[] b=new int[n2];
    for(int i=0;i<n1;i++){
        a[i]=sc.nextInt();
    }
    for(int i=0;i<n2;i++){
        b[i]=sc.nextInt();
    }        
    mergeTwoArray(a,b,n1,n2);    
    }
    public static void mergeTwoArray(int a[],int b[],int n1,int n2){
        for(int i=0;i<n1;i++){
            if(a[i]!=-1){
                System.out.print(a[i]+" ");
                for(int j=i+1;j<n1;j++){
                    if(a[j]==a[i]){
                        a[j]=-1;
                    }
                }
                for(int j=0;j<n2;j++){
                    if(a[i]==b[j]){
                        b[j]=-1;
                    }
                }
            }
        }
        for(int i=0;i<n2;i++){
            if(b[i]!=-1){
                System.out.print(b[i]+" ");
                for(int j=i+1;j<n2;j++){
                    if(b[i]==b[j]){
                        b[j]=-1;
                    }
                }
            }
        }
            
        }
    }