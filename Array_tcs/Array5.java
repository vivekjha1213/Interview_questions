public class Array5 {

  static void freq(int[] num) {
    boolean visited[] = new boolean[num.length];

    for (int i = 0; i < num.length; i++) {
      if (visited[i] == true) continue;
      //count frequency....

      int count = 1;
      for (int j = i + 1; j < num.length; j++) {
        if (num[i] == num[j]) {
          visited[j] = true;
          count++;
        }
      }
      System.out.println(num[i] + " " + count);
    }
  }

  public static void main(String[] args) {
    int array[] = { 10, 20, 10, 7, 7, 0, 2, 1, 0, 2, 0, 0, 10 };
    freq(array);
  }
}
