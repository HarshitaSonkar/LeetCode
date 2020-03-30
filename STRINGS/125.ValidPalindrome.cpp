class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(isalnum(s[i])&&isalnum(s[j]))  //whether the given character is alphanumeric or not
            {
                if(toupper(s[i])!=toupper(s[j]))
                    return false;
                    i++;
                    j--;
            } else {
                    if(isalnum(s[i]))
                       j--;
                      else
                       i++;
                    }
         }
       return true;
    }
        
};
