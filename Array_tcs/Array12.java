import java.util.Arrays;
public class Array12 {
    static void Dublicate(int[] array){
        Arrays.sort(array);
        for(int i=0;i<array.length-1;i++){


                if(array[i] == array[i+1])

                System.out.print(array[i]+" ");

            
            }
    }
    // static void pri(int[] num){
    //     for(int i:num){
    //         System.out.print(num[i]);
    //     }
    // }
   public static void main(String[] args) {
        int array[] ={1,2,1,2,3,5,6,7,3};
        Dublicate(array);
        // pri(array);
        
        
    }
    
}
