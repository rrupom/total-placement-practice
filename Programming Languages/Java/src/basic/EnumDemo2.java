package basic;

enum GestureType {
    UP(1, "fel"),
    RIGHT(1, "jobb"),
    DOWN(2, "le"),
    LEFT(3, "bal");

    private GestureType(int value, String name) {
        this.value = value;
        this.name = name;
    }

    public int getValue() {
        return this.value;
    }

    public String getName() {
        return this.name;
    }

    private int value;
    private String name;
}

public class EnumDemo2 {
    public static void main(String[] args) {
        for (GestureType type : GestureType.values()) {
            System.out.println(type.name() + ", " + type.getValue() + ", " + type.getName());
        }
    }
}
