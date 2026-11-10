class Solution {
public:
    double dfs(string src, string dest,
               unordered_map<string, vector<pair<string, double>>>& adj,
               unordered_set<string>& visited) {

        if(src == dest)
            return 1.0;

        visited.insert(src);

        for(auto& [next, weight] : adj[src]) {
            if(!visited.count(next)) {
                double result = dfs(next, dest, adj, visited);

                if(result != -1.0)
                    return weight * result;
            }
        }

        return -1.0;
    }

    vector<double> calcEquation(
        vector<vector<string>>& equations,
        vector<double>& values,
        vector<vector<string>>& queries) {

        unordered_map<string, vector<pair<string, double>>> adj;

        // Build weighted graph
        for(int i = 0; i < equations.size(); i++) {
            string u = equations[i][0];
            string v = equations[i][1];

            adj[u].push_back({v, values[i]});
            adj[v].push_back({u, 1.0 / values[i]});
        }

        vector<double> ans;

        for(auto& q : queries) {
            string u = q[0];
            string v = q[1];

            if(!adj.count(u) || !adj.count(v)) {
                ans.push_back(-1.0);
                continue;
            }

            unordered_set<string> visited;
            ans.push_back(dfs(u, v, adj, visited));
        }

        return ans;
    }
};