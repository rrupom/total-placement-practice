package basic;

/**
 * Why does the following code not generated NullPointerException at runtime
 */

/**
 * TODO: Revise all the codes done by you
 */

class Name {
    String name;

    static void greet() {
        System.out.println("Hello Rakib Talukder Rupom");
    }

    static void m1() {
        System.out.println("Name class m1");
    }
}

public class Tricky {
    public static void main(String[] args) {
        Name n = null;

        n.greet();
        n.m1(); // Name class m1

        /**
         * Explanation:
         * In the above example n.m1() will be treated as Name.m1(), and thus no
         * NullPointerException.
         */
    }
}
