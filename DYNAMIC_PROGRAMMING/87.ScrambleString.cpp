class Solution {
public:
    bool isScramble(string s1, string s2) {
        unordered_map<string,int> mp;
        return helper(s1,s2,mp);
    }
    bool helper(string s1, string s2,unordered_map<string,int> &mp)
    {
        if(s1==s2)
            return true;
        if(s1.length()!=s2.length())
            return false;
        if(s1.length()<=1 || s2.length()<=1)
            return false;
        string key=s1+" "+s2;
        if(mp.find(key)!=mp.end())
            return mp[key];
        bool ans=false;
        for(int k=0;k<s1.length()-1;k++)
        {
            bool c1=(helper(s1.substr(0,k+1),s2.substr(0,k+1),mp) && helper(s1.substr(k+1),s2.substr(k+1),mp));
            bool c2=(helper(s1.substr(0,k+1),s2.substr(s2.length()-k-1),mp) && helper(s1.substr(k+1),s2.substr(0,s2.length()-k-1),mp));
            
            if(c1 || c2)
            {
                ans=true;
                break;
            }
        }
        mp[key]=ans;
        return ans;
    }
};
