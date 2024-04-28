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
    int max_Occur=maxOccurence(arr);  
    int min_Occur=minOccurence(arr);  
    System.out.println(max_Occur+min_Occur);
    }
    //Methods
    public static int maxOccurence(int[] arr){
        Map<Integer,Integer> countMap=new HashMap<>();
        for(int num:arr){
            countMap.put(num,countMap.getOrDefault(num,0)+1);
        }
        int highestCount=countMap.get(arr[0]);
        for(int i=1;i<arr.length;i++){
            int count=countMap.get(arr[i]);
            if(count>highestCount){
                highestCount=count;
            }
        }
        return highestCount;
        
    }
     public static int minOccurence(int[] arr){
        Map<Integer,Integer> countMap=new HashMap<>();
        for(int num:arr){
            countMap.put(num,countMap.getOrDefault(num,0)+1);
        }
        int minCount=countMap.get(arr[0]);
        for(int i=1;i<arr.length;i++){
            int count=countMap.get(arr[i]);
            if(count<minCount){
                minCount=count;
            }
        }
        return minCount;   
    }
}