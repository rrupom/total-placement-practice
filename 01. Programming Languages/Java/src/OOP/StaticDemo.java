package OOP;

public class StaticDemo {
    static int a = 3;
    static int b;

    static {
        System.out.println("Static block initialized");
        b = 34;
    }

    static void meth(int x) {
        System.out.println("x = "+x);
        System.out.println("a = "+a);
        System.out.println("b = "+b);
    }

    public static void main(String[] args) {
        meth(42);
    }
}
