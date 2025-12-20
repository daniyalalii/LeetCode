class Solution {
public:
        void Combinations(vector<int>& candidates,int target, int ind, vector<int>& comb, int total, vector<vector<int>>& res){
            if(total==target) {
                res.push_back(comb);
                return;
            }
            if(total>target || ind>=candidates.size()) return;
            comb.push_back(candidates[ind]);
            Combinations(candidates,target,ind,comb,total + candidates[ind],res);
            comb.pop_back();
            Combinations(candidates,target,ind + 1,comb,total,res);

        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;

        Combinations(candidates,target,0,comb,0,res);
        return res;
    }
};