package Collection.QueueCollection;

import java.util.Arrays;
import java.util.Iterator;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;

public class BlockQueueDemo {
    public static void main(String[] args) {
        BlockingQueue<Integer> bq = new LinkedBlockingQueue<>();
        bq.add(75);
        bq.add(86);
        bq.add(13);
        bq.add(44);
        bq.add(10);

        System.out.println("The LinkedBlockingQeque contains: " + bq);
        bq.remove(86);
        bq.remove(44);
        System.out.println("The LinkedBlockingQueue contains: "+bq);

//        iterating through the elements
        Iterator iterator = bq.iterator();

        for(int i=0;i<bq.size();i++) {
//            System.out.print(iterator.next() + " ");
        }
        System.out.println("");
        while(iterator.hasNext()) {
            System.out.print(iterator.next() + " ");
        }
    }
}
