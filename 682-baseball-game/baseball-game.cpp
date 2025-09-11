class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        int sum = 0;
        for (auto i = 0; i < operations.size(); i++) {
            if(operations[i]=="D"){
                res.push_back(res.back()*2);
            }
            else if(operations[i]=="C"){
                res.pop_back();
            }
            else if(operations[i]=="+"){
                res.push_back(res.back() + res[res.size()-2]);
            }
            else{
                res.push_back(stoi(operations[i]));
            }
        }
        for(auto i=0;i<res.size();i++){
            sum+=res[i];
        }
        return sum;
    }
};