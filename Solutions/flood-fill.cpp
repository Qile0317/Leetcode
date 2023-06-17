class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int samecolor = image[sr][sc];
        image[sr][sc] = color;
        queue<pair<int, int>> q; q.push(make_pair(sr, sc));
        set<pair<int ,int>> s; // vvi is also possible
        
        int w = image.size()-1, h = image[0].size()-1;
        vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        while (!q.empty()) {
            pair<int, int> curr_pair = q.front();
            q.pop();
            s.insert(curr_pair);
            
            for (vector<int> d : dirs) {
                int nx = curr_pair.first + d[0], ny = curr_pair.second + d[1];
                if (((nx < 0) || (nx > w)) || ((ny < 0) || (ny > h))) {continue;}
                pair<int, int> candidate_pair = make_pair(nx, ny);
                
                if (s.count(candidate_pair) > 0) {
                    continue;
                }
                if (image[nx][ny] == samecolor) {
                    image[nx][ny] = color;
                    q.push(candidate_pair); 
                }
            }
        }
        return image;
    }
};