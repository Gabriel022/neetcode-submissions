class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_streak_length = 0;
        int maximum_streak_length_achieved = 0;
        for (auto i = nums.begin(); i < nums.end(); ++i){
            if (*i == 1){
                current_streak_length = current_streak_length + 1;
                
                if (current_streak_length > maximum_streak_length_achieved){
                    maximum_streak_length_achieved = current_streak_length;
            }
        }
            else if (*i == 0){
                current_streak_length = 0;
            }
        }
        return maximum_streak_length_achieved;
    }
};