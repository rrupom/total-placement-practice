package basic;

class A1 {

    void callme() {
        System.out.println("Inside's A's callme method");
    }
}
class B extends A1 {
    @Override
    void callme() {
        System.out.println("Inside's B's callme method");
    }
}

class C extends A1 {
    @Override
    void callme() {
        System.out.println("Inside C's callme method");
    }
}
public class DynamicMethodDispatch {
    public static void main(String[] args) {
        A1 a = new A1();
        B b = new B();
        C c = new C();

        A1 r;
        r = a;
        r.callme();

        r = b;
        r.callme();

        r = c;
        r.callme();
    }
}
