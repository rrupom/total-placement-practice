package Collection.MapCollection;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

public class CountFreq {
    public static void main(String[] args) {
        int a[] = { 1, 13, 4, 1, 41, 31, 31, 4, 13, 2 };
        ArrayList<Integer> aa = new ArrayList<>();

        for(int i=0;i<a.length;i++) {
            aa.add(a[i]);
        }

        HashMap<Integer,Integer> h = new HashMap<>();

        for(int i=0;i<aa.size();i++) {
            h.putIfAbsent(aa.get(i), Collections.frequency(aa,aa.get(i)));
        }

        for(Map.Entry<Integer,Integer> entry : h.entrySet()) {
            System.out.println(entry.getKey() + " = " + entry.getValue());
        }
    }
}
