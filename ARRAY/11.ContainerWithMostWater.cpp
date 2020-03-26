  class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0;
        int j=height.size()-1;
        int cap1=0;
        int cap2=0;
        int m=0;
        int max1=0;
        int max2=0;
        
        while(i<j){
            if(height[i]<height[j]){
                cap1=height[i]*(j-i);
                    if(cap1>max1){
                        max1=cap1;
                    }
                i++;
              }else{
                  cap2=height[j]*(j-i);
                if(cap2>max2){
                    max2=cap2;
                }
                  j--;
             }
            m=max(max1,max2);
        }
        return m;
    }
};
        
        
        
        
        
        
        
        /*
        int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int h = min(height[i], height[j]);
        water = max(water, (j - i) * h);
        while (height[i] <= h && i < j) i++;
        while (height[j] <= h && i < j) j--;
    }
    return water;
}
        
