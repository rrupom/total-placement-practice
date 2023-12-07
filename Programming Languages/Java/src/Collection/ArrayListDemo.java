package Collection;

import java.util.*;

public class ArrayListDemo {
    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(1);
        System.out.println("Initial List: "+list);
        list.remove(1);
        System.out.println("After removal of element: "+list);
        Collections.sort(list);
        System.out.println("After sorting: "+list);
        System.out.println("Size of the list: "+list.size());
//        ArrayList<String> al = new ArrayList<>();
//        al.add("Geeks");
//        al.add("Geeks");
//        al.add(1,"For");
//
//        System.out.println("Initial ArrayList: "+al);
//
//        al.remove(1);
//        System.out.println("After the Index Removal: "+al);
//        al.remove("Geeks");
//
//        System.out.println("After the object removal: "+al);

    }
}
