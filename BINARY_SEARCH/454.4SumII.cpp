class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
       
        unordered_map<int, int> mp;
        int count = 0;
        
        for(int i=0; i<C.size(); i++)
            for(int j=0; j<D.size(); j++)
                mp[C[i]+D[j]]++;
        
        for(int i=0; i<A.size(); i++)
            for(int j=0; j<B.size(); j++)
                if(mp.find(-(A[i]+B[j])) != mp.end())
                    count += mp[-(A[i]+B[j])];
        return count;
    }
};
