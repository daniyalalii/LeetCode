class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(arr[i]);
            if(!arr[i]) ans.push_back(0);
            arr[i] = ans[i];
        }
    }
};