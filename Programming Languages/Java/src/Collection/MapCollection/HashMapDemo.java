package Collection.MapCollection;

import java.util.*;

public class HashMapDemo {
    public static void main(String[] args) {
        Map<String,Integer> hm = new HashMap<>();
        hm.put("a",100);
        hm.put("b",200);
        hm.put("rakib",300);
        hm.put("rupom",500);

        System.out.println(hm);

        for(Map.Entry<String,Integer> entry: hm.entrySet()) {
           System.out.print(entry.getKey() + ":" + entry.getValue());
            System.out.println("");
        }
    }
}
