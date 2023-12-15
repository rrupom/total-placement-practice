import java.util.*;

class StackDemo {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<Integer>();
        stack.push(10);
        stack.push(20);
        stack.push(30);

        while (!stack.isEmpty()) {
            System.out.println(stack.pop());
        }
        stack.push(3);
        stack.push(5);
        System.out.println(stack.size());
        System.out.println(stack.peek());

    }
}