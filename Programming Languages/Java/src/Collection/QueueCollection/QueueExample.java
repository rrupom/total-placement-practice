package Collection.QueueCollection;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;

public class QueueExample {
    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<>();
        queue.add("apple");
        queue.add("banana");
        queue.add("cherry");

//        iterating over the queue
        Iterator iterator = queue.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next()+" ");
        }
//        System.out.println("Queue: "+queue);

//        String front = queue.peek();
//        System.out.println("Front element: "+front);

//        String front2 = queue.peek();
//        System.out.println("Removed Element: "+front2);

//        System.out.println("Queue after removal: "+queue);

        queue.add("date");

//        System.out.println("Peeked element: "+queue.peek());
//        System.out.println("Final Queue: "+queue);

    }
}
