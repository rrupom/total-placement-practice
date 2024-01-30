package basic;

/**
 * Design a program when every time creating a product give it a name product1,
 * product2, and so on
 */

public class Product {
    private final int ID;
    private static int counter;
    private static final String name = "PRODUCT";
    private String productName;

    public Product() {
        this.ID = ++this.counter;
        this.productName = getIdString();
    }

    private static String getIdString() {
        return name + counter;
    }

    public String getProductName() {
        return this.productName;
    }

    public static void main(String[] args) {
        Product p1 = new Product();
        System.out.println(p1.getProductName());
        Product p2 = new Product();
        System.out.println(p2.getProductName());
    }
}
