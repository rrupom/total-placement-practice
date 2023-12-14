class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        next = null;
    }
}

class LinkedList {
    public static void main(String[] args) {
        Node head = new Node(10);
        Node temp = new Node(20);
        Node temp2 = new Node(30);

        head.next = temp;
        temp.next = temp2;

        System.out.println(head.data + " " + head.next.data);
    }
}