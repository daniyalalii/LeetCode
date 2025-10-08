class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // tle
        // vector<int> pairs;
        // for (int i = 0; i < spells.size(); i++) {
        //     int count = 0;
        //     for (int j = 0; j < potions.size(); j++) {
        //         long long product = (long long)spells[i] * potions[j];
        //         if (product >= success) count++;
        //     }
        //     pairs.push_back(count);
        // }
        // return pairs;
        sort(potions.begin(),potions.end());
        vector<int> pairs;
        for(int spell:spells){
            long long req = (success+spell-1)/spell;
            auto find = lower_bound(potions.begin(),potions.end(),req);
            int count = potions.end()-find;
            pairs.push_back(count);
        }
        return pairs;
    }
};