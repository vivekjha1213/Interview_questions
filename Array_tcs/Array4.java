//Reverse a Given array using two pointer approach.....

public class Array4 {

 static void PrintArray(int[] n){
for(int i=0;i<n.length;i++){

    System.out.print(n[i]);
}

 }



    public static void Reverse(int[] n)
{
    //using two pointer .
    int i=0;
    int j=n.length-1;

    while(i<j){
        int temp= n[i];
        n[i]=n[j];
        n[j]=temp;
        i++;
        j--;

    }
    PrintArray(n);
    

}
    public static void main(String[] args) {

        int [] array = {10,2,9,88,10};
       Reverse(array);


        
    }
    
}
