import java.util.Arrays;
import java.util.HashSet;
public class Array10 {

    public static void main(String[] args) {

        int [] array ={2,3,2,3,1,4,6,7,9,9};
    
        HashSet<Integer> has = new HashSet<>();

        Arrays.sort(array);

        for(int i=0;i<array.length;i++){

            has.add(array[i]);

        }

       System.out.print(has);


        
    }
}
