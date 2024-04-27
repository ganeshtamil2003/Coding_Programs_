import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    String str=sc.nextLine().toLowerCase();
    if(checkPangram(str)){
        System.out.println("Pangram");
    }
    else{
        System.out.println("Not Pangram");
    }    
    }
    public static boolean checkPangram(String str){
        Set<Character> alphaSet=new HashSet<>();
        for(char ch:str.toCharArray()){
            if(Character.isLetter(ch)){
                alphaSet.add(ch);
            }
        }
        return alphaSet.size()==26;
    }
}