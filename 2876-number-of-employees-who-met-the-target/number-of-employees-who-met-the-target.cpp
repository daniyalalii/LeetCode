class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        // 2ms
        // for(int num : hours){
        //     if(num>=target){
        //         count++;
        //     }
        // }
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                count++;
            }
        }
        return count;
    }
};