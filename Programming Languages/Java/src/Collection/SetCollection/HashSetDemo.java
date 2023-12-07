package Collection.SetCollection;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class HashSetDemo {
    public static void main(String[] args) {
        Set<Integer> a = new HashSet<>();
        a.addAll(Arrays.asList(new Integer[]{1,3,2,4,8,9,0}));
        Set<Integer> b = new HashSet<>();
        b.addAll(Arrays.asList(new Integer[]{1,3,7,5,4,0,7,5}));

//        finding the union
        Set<Integer> union = new HashSet<>(a);
        union.addAll(b);
        System.out.println("Union of the two set: "+union);

//        finding the intersection
        Set<Integer> intersection = new HashSet<>(a);
        a.retainAll(b);
        System.out.println("Intersetion of the two set: "+intersection);

//        finding the difference
        Set<Integer> difference = new HashSet<>(a);
        a.removeAll(b);
        System.out.println("Difference of the two set: "+difference);

//        Set<String> hashSet = new HashSet<>();
//        hashSet.add("Geeks");
//        hashSet.add("For");
//        hashSet.add("Geeks");
//        hashSet.add("Example");
//        hashSet.add("Set");
//
//        System.out.println(hashSet);
////        iterating over the HashSet
//        Iterator iterator = hashSet.iterator();
//        for(int i = 0;i<hashSet.size();i++) {
//            System.out.print(iterator.next()+" ");
//        }
    }
}
