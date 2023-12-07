package basic;

class Stack {
    private int[] stck;
    private int tos;

    Stack(int size) {
        this.stck = new int[size];
        this.tos = -1;
    }

    void push(int item) {
        if(tos == stck.length) {
            System.out.println("Stack is full");
        } else {
            stck[++tos] = item;
        }
    }

    int pop() {
        if(tos == -1) {
            System.out.println("Stack is empty");
            return -1;
        }
        else return stck[tos--];
    }
}
public class StackDemo {
    public static void main(String[] args) {
        Stack st1 = new Stack(5);
        Stack st2 = new Stack(8);

        for(int i=0;i<5;i++) st1.push(i);
        for(int i=0;i<8;i++) st2.push(i);

        System.out.println("Stack is st1");
        for(int i=0;i<5;i++) {
            System.out.println(st1.pop());
        }

        System.out.println("Stack is st2");
        for(int i=0;i<9;i++) {
            System.out.println(st2.pop());
        }
    }
}
