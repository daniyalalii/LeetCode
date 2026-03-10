class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int index = capacity.size(), min = INT_MAX;
        for (int i = 0; i < capacity.size(); i++) {
            if (capacity[i] >= itemSize) {
                if (capacity[i] < min) {
                    index = i;
                    min = capacity[i];
                }
            }
        }
        if(index == capacity.size()) return -1;
        return index;
    }
};