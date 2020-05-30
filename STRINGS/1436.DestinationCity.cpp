class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
       unordered_set<string>src;
       for(int i=0;i<paths.size();i++){
           
           src.insert(paths[i][0]);//insert sources
       }
       for(int i=0;i<paths.size();i++){
           
           if(find(src.begin(),src.end(),paths[i][1])==src.end())//check if destination is not a source
               return paths[i][1];
       }
       return "";
        
    }
};
