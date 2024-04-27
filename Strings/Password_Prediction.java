import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        int num=sc.nextInt();
        passwordPrediction(str,num); //funtion calling
    }
    public static void passwordPrediction(String str,int num){
        for(int i=0;i<str.length();i++){
            char ch=str.charAt(i);
            if(ch>='a' && ch<='z'){
                ch=(char)('a'+((ch-'a'+num)%26));
            }
            else{
                ch=(char)('A'+((ch-'A'+num)%26));
            }
            System.out.print(ch);
        }
    }
}