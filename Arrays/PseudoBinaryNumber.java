import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
class PseudoBinaryNumber{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        List<Integer> result= pseudoBinaryNumber(n);
        System.out.println(result);
    }
    public static List<Integer> pseudoBinaryNumber(int num){
        List<Integer> result =new ArrayList<>();
        while(num>0){
            int pseudoBinary=0;
            int factor=1;
            int current=num;
            while(current>0){
                if(current%10!=0){
                    pseudoBinary+=factor;
                }
                current/=10;
                factor*=10;
            }
            result.add(pseudoBinary);
            num-=pseudoBinary;
        }
        return result;
    }
}