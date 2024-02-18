package OOP;

interface MyIF {
    int getNumber();

    // a default implementation
    default String getString() {
        return "Default String";
    }

    static int getDefaultNumber() {
        return 0;
    }

}
public class InterfaceDemo {
    public static void main(String[] args) {
        System.out.println(MyIF.getDefaultNumber());
    }
}
