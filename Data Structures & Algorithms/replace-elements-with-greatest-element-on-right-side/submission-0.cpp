// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         int n = arr.size();

//         for (int i = 0; i < n - 1; ++i){
//             int greatest_int = arr[i + 1];

//             for (int j = i + 1; j < n; ++j){
//                 if (arr[j] > greatest_int){
//                     greatest_int = arr[j];
//                 }

//                 arr[i] = greatest_int;
//             }
//         }
//         if(!arr.empty()){
//             arr[n-1] = -1;
//             return arr;
//         }
//         return arr;
//     }
// };

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int rightMax = -1;

        for (int i = n - 1; i >= 0; --i) {
            ans[i] = rightMax;
            rightMax = max(rightMax, arr[i]);
        }

        return ans;
    }
};