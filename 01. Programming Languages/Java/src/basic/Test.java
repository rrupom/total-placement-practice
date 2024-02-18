package basic;

public class Test {
    public static void main(String[] args) {
        System.out.println("My name is rakib talukder rupom");
        Player player = new Player("Amirul");
        player.printDetails();

        if(args.length > 0) {
            for (String s: args) {
                System.out.println(s);
            }
        }
    }
}
