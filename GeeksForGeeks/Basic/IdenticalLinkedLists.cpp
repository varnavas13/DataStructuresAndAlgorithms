/*
class Node {
    int data;
    Node next;

    public Node(int data){
        this.data = data;
        this.next = null;
    }
}*/

class Solution {
    // Function to check whether two linked lists are identical or not.
    public boolean areIdentical(Node head1, Node head2) {
       if(head1==head2)    return true;
        if(head1==null || head2==null || head1.data!=head2.data)   return false;
        return areIdentical(head1.next,head2.next);
    }
    
}