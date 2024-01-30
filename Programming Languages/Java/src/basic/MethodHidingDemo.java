package basic;

class Parent {
    public void instanceMethod() {
        System.out.println("This is an instance method of Parent");
    }

    public static void staticMethod() {
        System.out.println("This is an static method of Parent");
    }
}

public class MethodHidingDemo extends Parent {
    public void instanceMethod() {
        System.out.println("Override instance method in child");
    }

    public static void staticMethod() {
        System.out.println("Override static method in child. This is called method hiding");
    }

    public static void main(String[] args) {
        MethodHidingDemo md = new MethodHidingDemo();
        md.instanceMethod();
        MethodHidingDemo.staticMethod();

        Parent p = new Parent();
        // p.instanceMethod();
        Parent.staticMethod();
    }
}
