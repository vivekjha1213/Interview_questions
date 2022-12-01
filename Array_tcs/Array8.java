public class Array8 {


// find the average Total average of list ..
    public static void main(String[] args) {
        int[] array = {1,2,3,4,5};

        int sum=0;
 
        for(int i=0;i<array.length;i++){
        sum+=array[i];

    }
    double average = sum / array.length;
    System.out.print(average);
    }
    
}
