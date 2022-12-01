public class Array7 {

  public static int sum(int[] num) {
    int sum = 0;

    for (int i = 0; i < num.length; i++) {
      sum += num[i];
    }
    return sum;
  }

  public static void main(String[] args) {
    int[] arr = { 10, 19, 1, 1 };

    System.out.print(sum(arr));
  }
}
