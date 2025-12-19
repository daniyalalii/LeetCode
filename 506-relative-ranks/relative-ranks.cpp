class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> res(n);
        vector<int> index(n);
        iota(index.begin(),index.end(),0);
        sort(index.begin(),index.end(), [&](int a,int b){
            return score[a]>score[b];
        });
        for(int i=0;i<n;i++){
            int ind = index[i];
            if(i==0) res[ind] = "Gold Medal";
            else if(i==1) res[ind] = "Silver Medal";
            else if(i==2) res[ind] = "Bronze Medal";
            else res[ind] = to_string(i+1);
        }
        return res;
    }
};