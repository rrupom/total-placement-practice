package Collection;

import java.util.*;

public class StackDemo {

    public static void stack_push(Stack<Integer> stack) {
        for(int i=0;i<5;i++) {
            stack.push(i);
        }
    }

    public static void stack_pop(Stack<Integer> stack) {
        System.out.println("Pop operation:");
        for(int i = 0;i<5;i++) {
            int y = stack.pop();
            System.out.println(y);
        }
    }

    public static void stack_peek(Stack<Integer> stack) {
        int element = stack.peek();
        System.out.println("Element on stack top: "+element);
    }

    public static void stack_search(Stack<Integer> stack, int element) {
        int pos = stack.search(element);
        if(pos == -1) {
            System.out.println("Element not found");
        } else {
            System.out.println("Element is found at position: "+pos);
        }
    }

    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        stack_push(stack);
        stack_pop(stack);
        stack_push(stack);
        stack_peek(stack);
        stack_search(stack,2);
        stack_search(stack,100);
    }
}
