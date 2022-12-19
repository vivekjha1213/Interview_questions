package Recursion_core;

import java.util.Arrays;
import java.util.List;
import java.util.Stack;

public class Sort_stack_Recursion {

    static void sortedInssert(Stack<Integer> stack, int key) {

        // base case stack empty or not
        // the key is greater than all elements in the stack..

        if (stack.isEmpty() || key > stack.peek()) {
            stack.push(key);
            return;
        }
        int top = stack.pop();

        sortedInssert(stack, key);
        stack.push(top);
    }

    // Recursive method to sort a stack........

    public static void SortStack(Stack<Integer> stack) {

        if (stack.isEmpty()) {
            return;
        }

        // remove the top element..

        int top = stack.pop();

        // recursive for the remaining elelemts in the stack..

        SortStack(stack);
        // insert the popped element back into the sorted stack
        sortedInssert(stack, top);

    }

    public static void main(String[] args) {

        List<Integer> list=Arrays.asList(5,-2,9,-7,3);
        Stack<Integer> stack=new Stack<>();
        stack.addAll(list);
        System.out.println("Stack before sorting: " + stack);
        SortStack(stack);
        System.out.println("Stack after sorting: " + stack);

    }

}
