package basic;

enum Season {
    WINTER("Cold"),
    SPRING("Moderate"),
    SUMMER("HOT"),
    FALL("Cool");

    private final String description;

    private Season(String description) {
        this.description = description;
    }

    public String getDescription() {
        return this.description;
    }
}

public class EnumDemo {
    public static void main(String[] args) {
        Season currentSeason = Season.SUMMER;
        System.out.println("The current season is " + currentSeason + ", and it's " + currentSeason.getDescription());

        Season rSeason = Season.WINTER;
        System.out.println("The rSeason is " + rSeason + ", and it is " + rSeason.getDescription());
    }
}
