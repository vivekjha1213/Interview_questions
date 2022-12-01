import java.util.Arrays;
// find the second smallest number and second largest number is array..
public class Array3 {

  public static int sort1(int[] nums) {
    Arrays.sort(nums);

    return nums[1];
  }

  public static int sort2(int[] nums) {
    Arrays.sort(nums);

    return nums[nums.length - 2];
  }

  public static void main(String[] args) {
    int array[] = { 10, 2, 3, 4, 5, 1, 11, 76, 10 };
    System.out.println("second smallest number is :" + sort1(array));
    System.out.println("Last Largest number is:" + sort2(array));
  }
}
