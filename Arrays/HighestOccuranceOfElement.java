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
    int result=highestOccurence(arr);    
    System.out.print(result);
    }
    //Method
    public static int highestOccurence(int[] arr){
    Map<Integer,Integer> countMap=new HashMap<>();   
    for(int num:arr){
        countMap.put(num,countMap.getOrDefault(num,0)+1);
    }
    int highestCount=countMap.get(arr[0]);
    int highestElement=arr[0];
    for(int i=1;i<arr.length;i++){
        int count=countMap.get(arr[i]);
        if(count>highestCount){
            highestElement=arr[i];
            highestCount=count;
        }
    }
    return highestElement;     
    }
}