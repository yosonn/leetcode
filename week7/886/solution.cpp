class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(n + 1);

        for (vector<int>& dislike : dislikes) {
            graph[dislike[0]].push_back(dislike[1]);
            graph[dislike[1]].push_back(dislike[0]);
        }

        vector<int> color(n + 1, 0);

        for (int person = 1; person <= n; person++) {
            if (color[person] != 0) {
                continue;
            }

            color[person] = 1;
            queue<int> q;
            q.push(person);

            while (!q.empty()) {
                int current = q.front();
                q.pop();

                for (int next : graph[current]) {
                    if (color[next] == 0) {
                        color[next] = -color[current];
                        q.push(next);
                    } else if (color[next] == color[current]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
