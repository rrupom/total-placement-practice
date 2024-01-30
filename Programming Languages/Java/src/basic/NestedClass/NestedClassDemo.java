package basic.NestedClass;

class OuterClass {
    static class NestedStaticClass {
        void display() {
            System.out.println("Static nested class");
        }
    }
}

class OuterClass2 {
    class InnerClass {
        void display() {
            System.out.println("Inner class");
        }
    }
}

public class NestedClassDemo {
    public static void main(String[] args) {
        OuterClass.NestedStaticClass nested = new OuterClass.NestedStaticClass();

        nested.display();

        OuterClass2 outer = new OuterClass2();
        OuterClass2.InnerClass inner = outer.new InnerClass();
        inner.display();
    }
}
