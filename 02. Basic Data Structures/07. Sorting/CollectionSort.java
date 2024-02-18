import java.util.*;

class Point {
    int x;
    int y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

class MySort implements Comparator<Point> {
    public int compare(Point p1, Point p2) {
        return (p1.x - p2.x);
    }
}

public class CollectionSort {
    public static void main(String[] args) {
        ArrayList<Point> a = new ArrayList<>();
        a.add(new Point(1, 3));
        a.add(new Point(-1, 10));
        a.add(new Point(12, 1));
        a.add(new Point(8, 9));

        // increasing order
        // Collections.sort(a);
        // reverse order sorting
        // Collections.sort(a, Collections.reverseOrder());
        // Custom order
        Collections.sort(a, new MySort());

        for (int i = 0; i < a.size(); i++) {
            System.out.println(a.get(i).x + " " + a.get(i).y);
        }
    }
}
