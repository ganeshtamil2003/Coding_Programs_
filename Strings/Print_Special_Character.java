import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
    Scanner sc=new Scanner (System.in);
    String str=sc.nextLine();
    for(int i=0;i<str.length();i++){
        char ch=str.charAt(i);
        if(!(Character.isLetter(ch)) && !(Character.isDigit(ch)) ){
            System.out.print(ch);
        }
    }
    }
}