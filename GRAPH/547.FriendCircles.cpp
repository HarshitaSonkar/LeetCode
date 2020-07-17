class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        
        if(M.size() == 0)
            return 0;
        int n = M.size();
        
        vector<int> vect(n, 0);
        
        for(int i = 0; i < n; i++){
            vect[i] = i;                // initialize vect for every kid as themselves
        }
        int groups = n;
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){           // avoid recalculate M[i][j], M[j][i]
                if(M[i][j]){
                    int x = find(i, vect);
                    int y = find(j, vect);
                    if(x != y){                    // if 2 group belongs 2 different leads, merge 2 group to 1
                        vect[x] = y;
                        groups--;
                    }
                }
            }
        }
        return groups;
    }
    
    private : 
    
    int find(int &k, vector<int>&parent){
        return parent[k] == k ? k : find(parent[k], parent);
    }
};
