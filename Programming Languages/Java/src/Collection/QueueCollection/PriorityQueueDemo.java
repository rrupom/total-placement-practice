package Collection.QueueCollection;

import java.util.Collections;
import java.util.PriorityQueue;

public class PriorityQueueDemo {
    public static void main(String[] args) {
        PriorityQueue<String> pq = new PriorityQueue<>(Collections.reverseOrder());
        pq.add("rakib");
        pq.add("rupom");
        pq.add("ammu");

        System.out.println(pq);

//        iterating
        while(!pq.isEmpty()) {
            System.out.print(pq.poll()+ " ");
        }
    }
}
