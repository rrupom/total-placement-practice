package OOP;

class Demo {
    public void sayHello() {
        System.out.println("Hello, Good Morning");
    }
}

class OverrideDemo extends Demo {
    public void sayHello() {
        System.out.println("Static method overridden");
    }

    public static void main(String[] args) {
        OverrideDemo ovd = new OverrideDemo();
        ovd.sayHello();
    }
}