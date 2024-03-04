import java.util.*;
class BubbleSort{
    public static void main(String args[]){
        Scanner sc=new Scanner (System.in);
        System.out.print("Enter the N value : ");
        int n=sc.nextInt();
        System.out.print("Enter the Array elements : ");
        int a[]=new int[n];
        for(int i=0; i<n; i++){
            a[i]=sc.nextInt();
        }  
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        System.out.print("After Sorting :");
        for(int i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }   
    }
}