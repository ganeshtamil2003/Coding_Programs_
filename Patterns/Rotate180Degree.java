import java.util.*;
class Rotate180Degree{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[][] arr=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        rotate(arr,n);
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
    static void rotate(int[][] arr,int n){
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                if(i==n/2 && n%2==0)
                    break;
                if(i==n/2 && j>=n/2)
                    break;    
                int temp=arr[i][j];
                arr[i][j]=arr[n-i-1][n-j-1];
                arr[n-i-1][n-j-1]=temp;
            }
        }
    }
}