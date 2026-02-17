class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>s.length()) return s;
        vector<vector<int>> str(numRows);
        string res;
        int index = 0, val = 1;
        for(char c : s){
            str[index].push_back(c);
            if(index == 0) val = 1;
            else if(index == numRows-1) val = -1;
            index+=val;
        }
        for(const auto& i : str){
            for(char j: i) res += j;
        }
        return res;
    }
};
        