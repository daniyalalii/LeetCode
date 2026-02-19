class Solution {
public:
    string removeKdigits(string num, int k) {
        // if(k==0) return num;
        // stack<int> st;
        // for(char c: num){
        //     while(!st.empty() && k>0 && c<st.top()){
        //         st.pop();
        //         k--;
        //     }
        //     st.push(c);
        // }
        // while(k>0 && !st.empty()){
        //     st.pop();
        //     k--;
        // }

        // string res = "";
        // while(!st.empty()){
        //     res = char(st.top()) + res;
        //     st.pop();
        // }
        // string final_res = "";
        // bool isZero = true;

        // for(int i=0; i<res.length(); i++){
        //     if(res[i]!='0'){
        //         isZero = false;
        //     }
        //     if(!isZero){
        //         final_res += res[i];
        //     }
        // }

        // return final_res == "" ? "0" : final_res;

        string res = "";
        for (char c : num) {
            while (!res.empty() && k > 0 && c < res.back()) {
                res.pop_back();
                k--;
            }
            res.push_back(c);
        }

        while (k > 0 && !res.empty()) {
            res.pop_back();
            k--;
        }

        int start = 0;
        while (start < res.size() && res[start] == '0') {
            start++;
        }

        string final_res = res.substr(start);
        return final_res == "" ? "0" : final_res;
    }
};