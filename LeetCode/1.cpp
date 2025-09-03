class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++)
            for (int x = i+1; x < nums.size(); x++)
            {
                if(nums[i] + nums[x] == target)
                {
                    answer.push_back(i);
                    answer.push_back(x);
                    return answer;
                }
            }
        return answer;
    }
};
