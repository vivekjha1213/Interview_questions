public class Array13 {

  // symatric pair in array..

  public static void main(String[] args) {
    int[][] arr = { { 1, 2 }, { 2, 1 }, { 3, 4 }, { 4, 5 }, { 5, 4 } };

    int n = 5;

    for (int i = 0; i < n; i++) {
      for (int j = 1 + i; i < n; j++) {
        if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0]) {
          System.out.print("(" + arr[i][1] + " " + arr[i][0] + ")" + " ");
          break;
        }
      }
    }
  }
}
