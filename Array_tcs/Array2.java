// program to find max number in the list.../

import java.util.Arrays;

public class Array2 {

  public static int sort(int nums[]) {
    Arrays.sort(nums);
    return nums[nums.length - 1];
  }

  public static void main(String[] args) {
    int[] array = { 10, 40, 01, 22, 44, 44444 };

    System.out.println("" + sort(array));
  }
}
