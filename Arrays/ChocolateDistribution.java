import java.util.*;
class ChocolateDistribution{
    public static int minimumdiff(int arr[],int n){
        Arrays.sort(arr);
        int min=Integer.MAX_VALUE;
        for(int i=0;i<=arr.length-n;i++){
            int diff=arr[i+n-1]-arr[i];
            min=Math.min(min,diff);
        }
        return min;
    }
    public static void main(String args[]){
        //Scanner sc=new Scanner(System.in);
        int n=3;
        int arr[]={10,4,12,3,1};
        int result=minimumdiff(arr,n);
        System.out.println(result);
        
    }
}