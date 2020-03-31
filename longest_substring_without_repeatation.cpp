//find the longest substring without repeting the char::
//take a set and insert the char and find ans on  each iteration
//if char repeate remove the char on the set that is in previous postion
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
         unordered_set<char>s1;
        int i=0,j=0;
        while(i<s.size() && j<s.size())
        {
            if(s1.count(s[j])==0)
            {
                s1.insert(s[j++]);
                int i1=s1.size();
                ans=max(ans,i1);
            }
            else
                s1.erase(s[i++]);
        }
        return ans;
    }
};
