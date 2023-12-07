package Collection.MapCollection;

import java.util.Map;
import java.util.TreeMap;

public class TreeMapDemo {
    public static void main(String[] args) {
        Map<String,Integer> map = new TreeMap<>();
        map.put("rakib",10);
        map.put("rupom",20);
        map.put("abbu",30);

        for(Map.Entry<String,Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " : "+ entry.getValue());
        }
    }
}
