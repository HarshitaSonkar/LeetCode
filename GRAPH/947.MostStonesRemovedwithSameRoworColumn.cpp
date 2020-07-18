class Solution {
    vector<int> parent;
    int find(int z){
        return parent[z] == z ? z : find(parent[z]);
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        
        if(stones.size() == 0)
            return 0;
        int n =  stones.size();
        
       // vector<int> res(n, 0);
       // vector<int> parent(n, 0);
       
        parent.resize(n, 0);
        for(int i = 0; i < stones.size(); i++){
           //res[i] = i;
            parent[i] = i;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]){
                    int x = find(i);
                    int y = find(j);
                   if(x!=y)
                      parent[y] = x;
                 }
            }
        }
        
        int count = 0;
        for(int i = 0; i < n; i++){
           // if(res[i] == i)
             if(parent[i] == i)
                count++;
        }
        
      return n - count;
        
    }
};
