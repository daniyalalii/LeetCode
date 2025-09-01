class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negative = 0;
        int r = grid.size();
        int c = grid[0].size();
        int i = r-1;
        int j = 0;

        while(i>=0 && i<r && j>=0 && j<c){
            if(grid[i][j]<0){
                negative = negative + (c-j);
                i--;
            }
            else{
                j++;
            }
        }
        return negative;
    }
};