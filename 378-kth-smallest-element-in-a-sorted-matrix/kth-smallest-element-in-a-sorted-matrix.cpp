class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue< vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        int res;
        for(int i=0; i<matrix.size(); i++){
            pq.push({matrix[i][0], i, 0});
        }
        while(k--){
            auto top = pq.top();
            pq.pop();
            res = top[0];
            int r = top[1];
            int c = top[2];
            if(c+1 < matrix.size()){
                pq.push({matrix[r][c+1], r, c+1});
            }
        }
        return res;
    }
};