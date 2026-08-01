class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // create a vector
        int n = nums.size();
        vector<int> new_vector;
        new_vector.reserve(2 * n);

        for (int g = 0; g < 2; ++g){
            for (int i = 0; i < n; ++i){
                new_vector.push_back(nums[i]);
            }
        }
        return new_vector;
    }
};