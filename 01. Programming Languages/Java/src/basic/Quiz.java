package basic;

public class Quiz {
    public static void main(String[] args) {
        String s = "Hello   ";
        System.out.println(s.length());
        System.out.println(s.isEmpty());

        System.out.println(s.startsWith("Help"));
        System.out.println(s.stripIndent()+"*");
        String substring = s.substring(2);
        System.out.println(substring);
    }
}
