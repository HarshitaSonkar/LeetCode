class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        vector<int>vect;
        set<int>snum(nums.begin(),nums.end());
        set<int>::iterator it;
        for(it=snum.begin();it!=snum.end();it++){
            vect.push_back(*it);
        }
        if(vect.size()<3){
            return vect[vect.size()-1];
        }else
        return vect[vect.size()-3];

    }
};

/*
sort(nums.begin(), nums.end());
nums.erase(unique(nums.begin(), nums.end()), nums.end());
return nums[nums.size()-((nums.size() >= 3) ? 3 : 1)];

*/
