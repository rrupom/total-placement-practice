package basic;

class A {
    public static void vaTest(int ... v) {
        System.out.print("length of v = " + v.length + " ");
        for(int i: v) {
            System.out.print(i + " ");
        }
        System.out.println("");
    }
}
public class VariableArgs {
    public static void main(String[] args) {
        A.vaTest(10,20,30);
    }
}
