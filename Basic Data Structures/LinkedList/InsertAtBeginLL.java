class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        next = null;
    }
}

public class InsertAtBeginLL {
    public static void main(String[] args) {
        Node head = null;
        head = insertAtBeginLL(head, 30);
        head = insertAtBeginLL(head, 20);
        head = insertAtBeginLL(head, 10);
        printLL(head);
    }

    public static void printLL(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println("");
    }

    public static Node insertAtBeginLL(Node head, int data) {
        Node temp = new Node(data);
        temp.next = head;
        return temp;
    }
}
