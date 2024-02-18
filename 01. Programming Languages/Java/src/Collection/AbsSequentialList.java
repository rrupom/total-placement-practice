package Collection;

import java.util.*;

public class AbsSequentialList {
    public static void main(String[] args) {
        AbstractSequentialList<String> strs = new LinkedList<>();
        strs.add("Rakib");
        strs.add("Rupom");
        strs.add("Talukder");
        strs.add("10");
        strs.add("20");

        System.out.println("AbstractSequentialList: " + strs);
        strs.remove(3);
        System.out.println("Final List: "+ strs);
//        AbstractSequentialList<Integer> abs = new LinkedList<>();
//        abs.add(5);
//        abs.add(6);
//        abs.add(7);
//
//        System.out.println(abs);
    }
}
