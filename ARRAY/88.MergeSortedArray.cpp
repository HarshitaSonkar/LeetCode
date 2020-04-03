class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int k=m;k<m+n;k++){
            nums1[k]=nums2[k-m];
        }
        sort(nums1.begin(),nums1.end());
        
     }
};
