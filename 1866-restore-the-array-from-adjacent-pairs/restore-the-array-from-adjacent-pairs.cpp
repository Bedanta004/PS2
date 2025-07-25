class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> graph;

        for (const auto& pair : adjacentPairs) {
            graph[pair[0]].push_back(pair[1]);
            graph[pair[1]].push_back(pair[0]);
        }

        int start = 0;
        for (const auto& [node, neighbors] : graph) {
            if (neighbors.size() == 1) {
                start = node;
                break;
            }
        }

        int n = adjacentPairs.size() + 1;
        vector<int> result(n);
        result[0] = start;
        result[1] = graph[start][0];

        for (int i = 2; i < n; ++i) {
            const auto& neighbors = graph[result[i - 1]];
            result[i] = (neighbors[0] == result[i - 2]) ? neighbors[1] : neighbors[0];
        }

        return result;


    }
};