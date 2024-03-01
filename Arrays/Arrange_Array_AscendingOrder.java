import java.util.*;
public class Arrange_Array_AscendingOrder{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the N value : ");
        int n=sc.nextInt();
        int a[]=new int[n];
        System.out.print("Enter the Array elements : ");
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        System.out.print("After Sorting : ");
        for(int i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
    }
}