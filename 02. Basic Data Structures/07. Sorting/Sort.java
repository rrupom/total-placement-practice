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

public class Sort {
    public static void main(String[] args) {
        Point[] points = {
                new Point(10, 12),
                new Point(3, 7),
                new Point(1, 4)
        };

        Arrays.sort(points, new MySort());

        for (int i = 0; i < points.length; i++) {
            System.out.println(points[i].x + " " + points[i].y);
        }
    }
}