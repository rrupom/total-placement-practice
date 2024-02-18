class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        next = null;
    }
}

public class TraverseLinkedList {
    public static void main(String[] args) {
        Node head = new Node(10);
        head.next = new Node(20);
        head.next.next = new Node(30);
        head.next.next.next = new Node(40);
        printList(head);
        // printList(head);
        recursivePrintList(head);
    }

    public static void recursivePrintList(Node head) {
        if (head == null) {
            return;
        }
        System.out.print(head.data + " ");
        recursivePrintList(head.next);
    }

    public static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println("");
    }
}
