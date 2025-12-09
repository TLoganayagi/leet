class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto &e:edges)
        {
            int u=e[0], v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }       

        vector<int> vis(n,false);
        queue<int>q;
        q.push(source);
        vis[source]=true;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            if(node==destination)   return true;

            for(int n:adj[node])
            {
                if(!vis[n])
                {
                    vis[n]=true;
                    q.push(n);
                }
            }
        }
        return false;
    }
};