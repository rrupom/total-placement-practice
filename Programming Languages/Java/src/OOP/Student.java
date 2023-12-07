package OOP;


class Test {
    private String name;

    void fun() {
        System.out.println("Coding is a fun");
    }

    void setName(String name) {
        this.name = name;
    }

    String getName() {
        return this.name;
    }

    int sum(int a,int b) {
        return a+b;
    }
    double sum(double a,double b) {
        return a+b;
    }
    int sum(int a,int b,int c) {
        return a+b+c;
    }
}
public class Student  {
    public static void main(String[] args) {
        Test test = new Test();
        test.setName("rakib talukder rupom ");
        System.out.println(test.getName());
    }
}
