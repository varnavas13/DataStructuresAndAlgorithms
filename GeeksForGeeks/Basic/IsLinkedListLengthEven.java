// User function Template for Java
class Solution {
    public boolean isLengthEven(Node head) {
        int sz=0;
        Node temp=head;
        while(temp!=null)
        {
            sz++;
            temp=temp.next;
        }
        return sz%2==0;
    }
}