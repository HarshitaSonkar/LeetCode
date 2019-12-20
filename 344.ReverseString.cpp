class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=s.size()-1;
        char temp;
        int j=0;
        while(j<i){
            temp=s[j];
            s[j++]=s[i];
            s[i--]=temp;
         }
        
    }
};
