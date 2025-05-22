/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void printRecurr(Node* root, vector<vector<int>>& paths, vector<int>& currentPath) {
    if (root == nullptr) return;
    currentPath.push_back(root->data);
    if (root->left == nullptr && root->right == nullptr) {
        paths.push_back(currentPath);
    } else {
        printRecurr(root->left, paths, currentPath);
        printRecurr(root->right, paths, currentPath);
    }
    currentPath.pop_back(); 
}

vector<vector<int>> Paths(Node* root) {
    vector<vector<int>> paths;
    vector<int> currentPath;
    printRecurr(root, paths, currentPath);
    return paths;
}

};