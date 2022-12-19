package StringTcs;

public interface String5 {

    static int removeSpaces(char[] str) {

        int count = 0; // to track spaces seen so far
    
        for (int i = 0; i < str.length; i++)
          if (str[i] != ' ') {
            str[count] = str[i];
            count++; // increment count
          }
    
        return count;
      }


    public static void main(String[] args) {
        char[] ch ="hello how are you sir".toCharArray();

        int count=removeSpaces(ch);
        System.out.println(String.valueOf(ch).subSequence(0, count));
        
    }
    
    
}
