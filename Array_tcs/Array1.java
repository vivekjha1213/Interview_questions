import java.util.Arrays;
//find the smallest element in the array...
class Array1{


    public static int sort(int nums[]){

        Arrays.sort(nums);

        return nums[0];
       
       



    }

 public static void main(String[] args) {

 int[] array = {3,5,9,2,1,10};

 System.out.println("the smallest element is:"+sort(array));

    
}


}