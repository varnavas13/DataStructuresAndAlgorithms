class Solution {
  public:
    TreeNode *solve(vector<int> &arr,int i){
    if(i>=arr.size())
    return NULL;
    TreeNode *newNode=new TreeNode(arr[i]);
    newNode->left=solve(arr,2*i+1);
    newNode->right=solve(arr,2*i+2);
    return newNode;
    
}
void convert(Node *head, TreeNode *&root) {
    vector<int> arr;
    Node *temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    root=solve(arr,0);
}
};