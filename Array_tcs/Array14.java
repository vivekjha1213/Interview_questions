public class Array14 {

  static int mult(int[] array, int n) {
    int multi = 1;
    for (int i = 0; i < n; i++) {
      multi *= array[i];
    }
    return multi;
  }

  public static void main(String[] args) {
    int[] arr = { 1, 2, 3, 4, 5, 0 };

    System.out.println(mult(arr, arr.length));
  }
}
