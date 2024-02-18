package basic;

public class OutputDemo {
    public static void main(String[] args) {
        int x = 100;
        int z = 200;
        System.out.format("Value of x is %d\n",x);

        double y = Math.PI;
        System.out.println(y);

        System.out.format("Value of PI = %.2f\n",y);
        System.out.format("Value of PI = %5.2f\n",y);
        System.out.format("Value of PI = %05.2f\n",y);
        System.out.printf("x = %d, y = %d",x,z);

        System.out.println();
    }
}
