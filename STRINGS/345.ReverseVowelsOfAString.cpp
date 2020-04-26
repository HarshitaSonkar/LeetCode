bool vowel(char ch){
    
    switch(ch){
        case 'a':
        case 'A':
        case 'e':  
        case 'E':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            return true;
        default:
            return false;
    }
}
class Solution {
public:
    string reverseVowels(string s) {
        
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(!vowel(s[i])){
                i++;
                continue;
            }
            if(!vowel(s[j])){
                j--;
                continue;
            }
            swap(s[i++],s[j--]);
        }
       return s;     
    }
};
