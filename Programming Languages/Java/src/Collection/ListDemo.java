package Collection;

import java.util.*;

public class ListDemo {
    public static void main(String[] args) {

        List<Integer> linkedList = new LinkedList<>();
        for(int i=1;i<=10;i++) {
            linkedList.add((int) (Math.random()*11));
        }

//        printing linkedlist element
        for(int number : linkedList) {
            System.out.print(number + " ");
        }
        System.out.println("");
//        another way of printing linkedlist element
        for(int i=0;i<10;i++) {
            System.out.print(linkedList.get(i) + " ");
        }
//        System.out.println(linkedList);
//        List<Integer> v = new Vector<>();

        System.out.println("Happy Coding");
//        List<String> names = new ArrayList<>();
//        names.add("rakib");
//        names.add("rupom");
//        names.add("talukder");
//        names.add("mahbub");
//        names.add("saima");
//        names.add("merin");
//        names.add("sujabat");
//        names.add("rawshonara");
//
//        System.out.println("rupom is present: " + names.contains("rakib"));

//        List<Integer> numbers = new ArrayList<>();
//
//        for(int i=1;i<=10;i++) {
//            numbers.add(i);
//        }
//        for(int i=10;i>0;i--) {
//            numbers.add(i);
//        }
//        System.out.println(numbers);
//        System.out.println("First index of 2: "+ numbers.indexOf(2));
//        System.out.println("Last Index of 2: "+ numbers.lastIndexOf(2));

//         inserting element
//        List<String> strs = new ArrayList<>();
//        strs.add("rakib");
//        strs.add("talukder");
//        strs.add("rupom");
//        System.out.println(strs);
//        List<Integer> l1 = new ArrayList<Integer>();
//        l1.add(0,1);
//        l1.add(1,2);
//        System.out.println(l1);
//
//        List<Integer> l2 = new ArrayList<Integer>();
//        l2.add(1);
//        l2.add(2);
//        l2.add(3);
//        l1.addAll(1,l2);
//        System.out.println(l1);
//
//        l1.remove(1);
//        System.out.println(l1.get(3));
//        l1.set(0,5);
//        System.out.println(l1);
    }
}
