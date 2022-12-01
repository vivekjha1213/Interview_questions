public class Array11 {

  static void printArray(int[] num) {
    for (int i = 0; i < num.length; i++) {
      System.out.println(num[i]);
    }
  }
  /**
   * @param num
   * @param value
   */
  static void Insert(int[] arr, int n, int value) {
    for (int i = n - 1; i >= 0; i--) {
      arr[i + 1] = arr[i];
    }
    arr[0] = value;
  }

  static void insertatEnd(int[] arr, int n, int value) {
    arr[n] = value;
  }

  static void insertatpos(int[] arr, int n, int pos, int value) {
    for (int i = n - 1; i >= pos; i--) {
      arr[i] = arr[i - 1];
    }
    arr[pos-1] = value;
  }

  public static void main(String[] args) {
    int array[] = { 10, 1, 2, 3, 10, 22, 5 };
    int n = array.length - 1;
    int value = 7;
    int pos=3;
    //Insert(array, n,value);
    // printArray(array);
    //After array iserted..
    // insertatEnd(array,n,value);
    insertatpos(array, n, pos, value);
    printArray(array);
  }
}
