class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
     vector<bool>visited(n,false);
     queue<int> q;
     if(source==destination)
     return true;
     q.push(source);
     visited[q.front()]=true;
     while(!q.empty())
     {
        
        int temp=q.front();
        q.pop();
        for(int i=0;i<edges.size();++i)
        {
            if(edges[i][0]==temp)
            {
                int temp2=edges[i][1];
                if(visited[temp2]==false)
                {
                    
                    q.push(temp2);
                    if(temp2==destination)
                    return true;
                    visited[temp2]=true;
                }
            }
            if(edges[i][1]==temp)
            {
                int temp2=edges[i][0];
                if(visited[temp2]==false)
                {
                    
                    q.push(temp2);
                    if(temp2==destination)
                    return true;
                    visited[temp2]=true;
                }
            }

        }
     }
     return false;   
    }
};