class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;

        for (int i = 0; i < static_cast<int>(nums.size()); i++){
            count[nums[i]]++;

        }

        //we need a vector of vectors to hold numbers appearing f times
        // Use nums.size() + 1 because the bucket index represents a frequency, and frequencies can range from 1 through nums.size()
        vector<vector<int>> buckets(nums.size() + 1);

        for (const auto& entry : count) {
            int num = entry.first;
            int frequency = entry.second;
            buckets[frequency].push_back(num);
        }

        vector<int> result; // int vector to store the result
        
        for (int frequency = nums.size(); frequency >= 1; frequency--){
            for (int num: buckets[frequency]) {
                result.push_back(num);

                if (result.size() == k){
                    return result;
                }
            }
        }
        return result;
    }
};
