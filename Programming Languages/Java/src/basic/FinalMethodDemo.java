package basic;

class Parent {
    public void method() {
        System.out.println("I am in the parent class");
    }
}

class ChildLevel1 extends Parent {
    @Override
    public final void method() {
        System.out.println("I am in the child class");
    }
}

class SubChild extends ChildLevel1 {

}

class ChildLevel2 extends Parent {
    @Override
    public void method() {
        System.out.println("I am in the second child class");
    }
}

public class FinalMethodDemo {
    public static void main(String[] args) {
        ChildLevel1 child = new ChildLevel1();
        child.method();

        ChildLevel2 child2 = new ChildLevel2();
        child2.method();

        SubChild child3 = new SubChild();
        child3.method();
    }
}
