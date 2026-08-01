class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for (int i = 0; i < operations.size(); ++i){
            string operation = operations[i];

            if (operation == "+"){
                int last = scores.back();
                int secondLast = scores[scores.size() - 2];
                scores.push_back(last + secondLast);
            }
            else if (operation == "D"){
                scores.push_back(2 * scores.back());
            }
            else if (operation == "C"){
                scores.pop_back();
            }
            else { // int
                scores.push_back(stoi(operation));
            }
        }
        
        int sum = 0;
        for (int i = 0; i < scores.size(); ++i){
            sum += scores[i];
        }
        return sum;
    }
};