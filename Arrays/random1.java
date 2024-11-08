// int findCount(int arr[], int length, int Num, int diff);
// The function accepts an integer array 'arr', its length and two integer variables 'num'
// and 'diff'.`
// Implement this function to find and return the number of elements of 'arr' having an
// absolute difference of less than or equal to 'diff' with 'num'.
// Note: In case there is no element in 'arr' whose absolute difference with 'num' is less
// than or equal to 'diff', return -1.
// Example:
// Input:
// arr: 12 3 14 56 77 13
// Num: 13
// diff: 2

import java.util.*;
class random1{
    public int findCount(int arr[],int length,int num,int diff){
        int count=0;
        for(int i=0;i<length;i++){
            if(Math.abs(arr[i]-num)<=diff){
                count++;
            }
        }
        if(count==0){
            return -1;
        }else{
            return count;
        }

    }
    public static void main(String args[]){
        random1 obj=new random1(); 
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int num=sc.nextInt();
        int diff=sc.nextInt();
        int result=obj.findCount(arr,arr.length,num,diff);
        System.out.print("Number of Elements : "+result);
    }
}