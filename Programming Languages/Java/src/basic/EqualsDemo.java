package basic;

public class EqualsDemo {
    public static void main(String[] args) {
        String str1 = new String("hello");
        String str2 = new String(" hello");

        String str3 = "hello";
        String str4 = "hello";
        String str5 = str3;

        System.out.println(str1 == str2);
        System.out.println(str3 == str4);
        System.out.println(str5 == str3);

        System.out.println(str1.equals(str2));
        System.out.println(str3.equals(str1));
    }
}
