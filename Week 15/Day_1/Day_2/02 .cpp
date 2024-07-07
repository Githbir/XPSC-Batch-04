class Solution
{
public:
   bool isPalindrome(string &s, int l, int r)
   {
      while (l <= r)
         if (s[l++] != s[r--])
            return false;
      return true;
   }
   void f(int idx, vector<vector<string>> &ans, vector<string> &a, string &s)
   {
      if (idx == s.size())
      {
         ans.push_back(a);
         return;
      }

      for (int i = idx; i < s.size(); i++)
         if (isPalindrome(s, idx, i))
         {
            a.push_back(s.substr(idx, i - idx + 1));
            f(i + 1, ans, a, s);
            a.pop_back();
         }
   }
   vector<vector<string>> partition(string s)
   {
      vector<vector<string>> ans;
      vector<string> a;
      f(0, ans, a, s);
      return ans;
   }
};