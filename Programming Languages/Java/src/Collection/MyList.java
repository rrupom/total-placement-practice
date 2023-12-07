package Collection;

import java.util.AbstractSequentialList;
import java.util.List;
import java.util.ListIterator;

public class MyList extends AbstractSequentialList<Integer> {
    private int size;
    public MyList(int size) {
        this.size = size;
    }
    public ListIterator<Integer> listIterator(int index) {
        return new ListIterator<Integer>() {
            private int currentIndex = index;
            @Override
            public boolean hasNext() {
                return currentIndex < size;
            }

            @Override
            public Integer next() {
                return currentIndex++;
            }

            @Override
            public boolean hasPrevious() {
                return currentIndex > 0;
            }

            @Override
            public Integer previous() {
                return currentIndex--;
            }

            @Override
            public int nextIndex() {
                return currentIndex++;
            }

            @Override
            public int previousIndex() {
                return currentIndex--;
            }

            @Override
            public void remove() {
                throw new UnsupportedOperationException();
            }

            @Override
            public void set(Integer integer) {
                throw new UnsupportedOperationException();
            }

            @Override
            public void add(Integer integer) {
                throw new UnsupportedOperationException();
            }
        };
    }
    public int size() {
        return this.size;
    }

    public static void main(String[] args) {
        List<Integer> list = new MyList(5);
        for(int i:list) {
            System.out.println(i);
        }
    }
}
