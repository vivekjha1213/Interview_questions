import java.util.Arrays;

public class Array6 {
// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7

// Approach:

// Sort the given array.
// Print the first half of the array i.e from 0 to (n/2 -1)th index,to print the first half in the ascending order.
// Then print elements from n-1 to n/2th index to get the second half in the descending order.


static void order(int[] n){

Arrays.sort(n);
    for(int i=0;i<n.length/2;i++){
     
        System.out.print(n[i]+"");

    }
    for(int i=n.length-1;i>=n.length/2;i--){
        System.out.print(n[i]+"");
    }


}

public static void main(String[] args) {
    int[] array = {8,7,1,6,5,9};
    order(array);

}
    
}
