import java.util.*;

class Node {
    int data;
    
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
public class linkedlistSize{
    public static void main(String[] args) {
        
        Node head = new Node(0);
        head.next = new Node(1);
        head.next.next = new Node(2);
        head.next.next.next = new Node(3);
        head.next.next.next.next =  new Node(4);

        System.out.println("size of linkedlist : " + countNode(head));




    }

    public static int countNode(Node head) {
        int count  = 0;

        Node curr = head;
        while(curr!= null) {
            count++;
            curr = curr.next;
        }
        return count;
    }
}

