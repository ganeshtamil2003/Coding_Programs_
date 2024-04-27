import java.io.*;
import java.util.*;

public class Check_Identical_Matrix_or_not{
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n1,n2;
    n1=sc.nextInt();
    int[][] arr1=new int[n1][n1];    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n1;j++){
            arr1[i][j]=sc.nextInt();
        }
    }
    n2=sc.nextInt();
    int[][] arr2=new int[n2][n2];    
    for(int i=0;i<n2;i++){
        for(int j=0;j<n2;j++){
            arr2[i][j]=sc.nextInt();
        }
    }
    checkIdenticalMatrix(arr1,arr2,n1,n2);
    }   
    public static void checkIdenticalMatrix(int[][] arr1, int[][] arr2,int n1,int n2){
    int count=0; 
    if(arr1.length!=arr2.length){
        count=1;
    }else{
        for(int i=0;i<n1;i++){
            for(int j=0;j<n1;j++){
                if(!(arr1[i][j]==arr2[i][j])){
                    count=1;
                    break;
                }
            }
        }
    }
    if(count>0){
        System.out.println("Not Identical");
    }else{
        System.out.println("Identical");
    }
    }            
}  