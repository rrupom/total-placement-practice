package Collection.SetCollection;

// enum set is a high-performance set implementation, much faster than
// HashSet.

import java.util.EnumSet;
import java.util.Set;

enum Gfg {CODE, LEARN, CONTRIBUTE, QUIZ, MCQ};
public class EnumSetDemo {
    public static void main(String[] args) {
        Set<Gfg> set1;
        set1 = EnumSet.of(Gfg.QUIZ, Gfg.CONTRIBUTE, Gfg.LEARN, Gfg.CODE);
        System.out.println("Set 1: "+set1);
    }
}
