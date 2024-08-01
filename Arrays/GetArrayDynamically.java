import java.util.*;
class GetArrayDynamically{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<Integer> numbers=new ArrayList<>();
        while(sc.hasNextInt()){
            int num=sc.nextInt();
            numbers.add(num);
        }
        // for(int n:numbers){
        //     System.out.print(n+" ");
        // }
        int[] array=numbers.stream().mapToInt(i->i).toArray();
        for(int n:array){
                System.out.print(n+" ");
        }
        System.out.print(array[0]);
    }
}