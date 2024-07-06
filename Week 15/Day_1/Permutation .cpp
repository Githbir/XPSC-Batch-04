class Solution
{
private:
   void fun(vector<int> &nums, vector<int> &v, vector<vector<int>> &ans, int freq[])
   {
      if (nums.size() == v.size())
      {
         ans.push_back(v);
         return;
      }
      for (int i = 0; i < nums.size(); i++)
         if (freq[i] == 0)
         {
            v.push_back(nums[i]);
            freq[i] = 1;
            fun(nums, v, ans, freq);
            freq[i] = 0;
            v.pop_back();
         }
   }
public:
   vector<vector<int>> permute(vector<int> &nums)
   {
      vector<vector<int>> ans;
      vector<int> v;
      int freq[nums.size()];
      memset(freq, 0, sizeof(freq));

      fun(nums, v, ans, freq);
      return ans;
   }
};