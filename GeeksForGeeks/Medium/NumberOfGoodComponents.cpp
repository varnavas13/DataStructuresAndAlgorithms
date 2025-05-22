
class Solution {
  public:
void dfs(int v, int& vertices, int& edges,
         vector<vector<int> >& adj, vector<int>& visited)
{
    visited[v] = 1;
 
    vertices++;
    edges += adj[v].size();
    for (auto to : adj[v]) {
        if (!visited[to]) {
            dfs(to, vertices, edges, adj, visited);
        }
    }
}
 
int findNumberOfGoodComponent(int e,int V,
                              vector<vector<int> >& t)
{
    int ans = 0;
    vector<vector<int>> adj;
    vector<int>temp;
    adj.push_back(temp);
    for(int i=0;i<V;++i)
    adj.push_back(temp);
    for(int i=0;i<t.size();++i)
    {
        adj[t[i][0]].push_back(t[i][1]);
        adj[t[i][1]].push_back(t[i][0]);
        
    }
    vector<int> visited(V + 1, 0);
 
    for (int i = 1; i <= V; i++) {
 
        if (!visited[i]) {
            int vertices = 0, edges = 0;
            dfs(i, vertices, edges, adj, visited);
 
            edges /= 2;
            if (edges == (vertices * (vertices - 1)) / 2)
                ans++;
        }
    }
    return ans;
}
};