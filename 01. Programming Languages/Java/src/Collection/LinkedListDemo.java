package Collection;

import java.util.LinkedList;

public class LinkedListDemo {
    public static void main(String[] args) {
        LinkedList<String> ll = new LinkedList<>();
        ll.add("A");
        ll.add("B");
        ll.addLast("C");
        ll.addFirst("D");
        ll.add(2,"E");

        System.out.println("LinkedList: "+ll);
        System.out.println("Peek Element:" + ll.peek());
        System.out.println("First element: "+ll.getFirst());
        System.out.println("Last element: "+ll.getLast());
        ll.offer("Rakib");
        ll.offerFirst("Rupom");
        System.out.println("LinkedList: "+ll);

        // head of the linkedlist
        System.out.println("Head: "+ll.poll());

        System.out.println("After deleting head: "+ll);

        // deleting tail
        System.out.println("Tail: "+ll.pollLast());
        System.out.println("After deleting tail: "+ll);

        // LinkedList to array using toArray() method
        Object[] ob = ll.toArray();

        for(Object a: ob) {
            System.out.println(a);
        }
    }
}
