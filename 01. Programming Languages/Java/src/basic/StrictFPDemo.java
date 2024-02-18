package basic;

class Example {
    strictfp void performCalculation() {
        double result = 1.0 / 3.0;
        System.out.println("Result in strictfp : " + result);
    }

    void performNormalCalculation() {
        double result = 1.0 / 3.0;
        System.out.println("Result in normal calculation : " + result);
    }
}

public class StrictFPDemo {
    public static void main(String[] args) {
        System.out.println("My name is Rakib Talukder Rupom");
        Example example = new Example();
        example.performCalculation();
        example.performNormalCalculation();
    }
}