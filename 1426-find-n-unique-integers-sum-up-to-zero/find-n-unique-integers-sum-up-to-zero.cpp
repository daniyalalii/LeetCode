class Solution {
public:
    vector<int> sumZero(int n) {
        bool even;
        if(n%2==0){
            even = true;
        }
        else{
            even = false;
        }
        vector<int>result;
        if(even){
            for(int i=-n/2;i<=n/2;i++){
                if(i!=0){
                result.push_back(i);
                }
            }
        }
        else{
            for(int i=-n/2;i<=n/2;i++){
                result.push_back(i);
            }
        }
        return result;
    }
};