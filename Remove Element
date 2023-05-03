class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int> :: iterator it;// = nums.begin();
 /*        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(it);
                //it--;
                i--;
            }
            else
                it++;
        }
  */
        for (it = nums.begin(); it != nums.end(); it++)
            if (*it == val)
            {
                nums.erase(it);
                it--;
            }
         return nums.size();
    }
};
