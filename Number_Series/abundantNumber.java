import java.io.*;
import java.util.*;

public class abundantNumber {

    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int total=checkFactor(n);
    if(total>n)
        System.out.println("Given number is abundant number");
    else
        System.out.println("Given number is not abundant number");
    }
    
    public static int checkFactor(int n){
        int count=0;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                count+=i;
            }
        }
        return count;
    }
}