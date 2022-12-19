package Recursion_core;

import java.util.Stack;

public class DelMidStack {





    static void DeleteMid(Stack<Character>st,int n,int curr){


        // check if stack is empty..
        if(st.isEmpty() || curr ==n){
            return ;
        }

        char x = st.pop();

        DeleteMid(st, n, curr);



        //put all item back except middle ..
        if(curr !=n/2)
        st.push(x);

    }

    public static void main(String[] args) {

        Stack<Character> st =new Stack<>();

        st.push('1');
        st.push('2');
        st.push('3');
        st.push('4');
        st.push('6');
        st.push('7');
        st.push('8');
        st.push('9');
        st.push('2');

        DeleteMid(st,st.size(), 0);

        while(!st.empty()){
            char p=st.pop();
            System.out.print(p+ " ");
        }
        

    }
    
}
