import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    String str1=sc.nextLine();
    String str2=sc.nextLine();
    if(checkAnagram(str1,str2)){
        System.out.print("It is an anagram");
    }else{
        System.out.print("It is not an anagram");
    }  
    }
    public static boolean checkAnagram(String str1,String str2){
        char[] ch_Array1=str1.toCharArray();
        char[] ch_Array2=str2.toCharArray();
        Arrays.sort(ch_Array1);
        Arrays.sort(ch_Array2);
        return Arrays.equals(ch_Array1,ch_Array2);
    }
}