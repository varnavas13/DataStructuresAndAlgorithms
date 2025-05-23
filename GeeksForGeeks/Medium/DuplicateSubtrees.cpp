
class Solution {
  public:
    string solve(Node *root,unordered_map<string,int> &mp,vector<Node*> &ans){
        if(!root){
            return "N";
        }
        
        string s=to_string(root->data) + "," + solve(root->left,mp,ans)
        + "," + solve(root->right,mp,ans);
        mp[s]++;
        if(mp[s]==2){
            ans.push_back(root);
        }
        return s;
    }
    
    
    vector<Node*> printAllDups(Node* root) {
        unordered_map<string,int> mp;
        vector<Node*> ans;
        solve(root,mp,ans);
        return ans;
        
    }
};