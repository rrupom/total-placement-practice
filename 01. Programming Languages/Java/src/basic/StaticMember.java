package basic;

class Player {
    String name;
    int id;
    private static int playerCount;
    Player(String name) {
        this.name = name;
        this.id = ++playerCount;
    }

    void printDetails() {
        System.out.println("ID : "+this.id + " Name: "+this.name);
    }

    static int getPlayerCount(){
        return playerCount;
    }
}

public class StaticMember {
    public static void main(String[] args) {
        Player p1 = new Player("Rakib");
        Player p2 = new Player("Mithu");
        p1.printDetails();
        p2.printDetails();
        System.out.println(Player.getPlayerCount());
    }
}
