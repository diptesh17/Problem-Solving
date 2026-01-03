class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        int V = adj.size();
        vector<int> ans;
        vector<bool> visited(V, false);
        queue<int> q;

        visited[0] = true;
        q.push(0);

        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            ans.push_back(curr);

            for (auto x : adj[curr]) {
                if (!visited[x]) {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }

        return ans;
    }
};
