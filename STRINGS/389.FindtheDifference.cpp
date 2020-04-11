class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum2=0;
        int diff;
        for(int i=0;i<s.length();i++){
            sum1=sum1+ s[i];
        }
        for(int j=0;j<t.length();j++){
            sum2=sum2+ t[j];
        }
        diff= sum2-sum1;
        return diff;
    }
};
