class Solution {
  public:
    int maxi=0;
    int mini=0;
    void solve(Node* root,int distance){
        if(!root)return ;
        
        maxi=max(distance,maxi);
        mini=min(distance,mini);
        solve(root->left,distance-1);
        solve(root->right,distance+1);
        
    }
    
    int verticalWidth(Node* root) {
        if(!root) return 0;
        solve(root,0);
        return maxi-mini+1;
    }
};