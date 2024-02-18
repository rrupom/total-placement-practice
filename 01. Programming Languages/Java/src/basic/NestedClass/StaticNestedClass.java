package basic.NestedClass;

/**
 * When a class is only need inside a class, then it should be defined inside
 * the class
 */

public class StaticNestedClass {
    private static Element head;

    public void insertFirst(Object value) {
        head = new Element(value, head);
    }

    private static class Element {
        /**
         * As this class is static, it can not access instances of the parent class
         */

        private Object value;
        private Element next;

        public Element(Object value, Element element) {
            this.value = value;
            this.next = element;
        }

        public Element(Object value) {
            this.value = value;
            this.next = null;
        }
    }

    public static void main(String[] args) {
        StaticNestedClass snc = new StaticNestedClass();
        snc.insertFirst(10);
    }
}
