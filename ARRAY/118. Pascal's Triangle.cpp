class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        /*     int i,j;
             int n=numRows;
             vector<vector<int>>vect(n);
              
             for( i=0;i<n;i++){
                for( j=0;j<vect[i].size();j++){
                    if(j==0 || j==vect[i].size()-1){
                       res.push_back(1);
                        vect.push_back(res);
                    //vect.push_back(1);
                    }else
                        vect[j].push_back(vect[i-1][j-1]+vect[i-1][j]);
                      //  vect[i][j]=vect[i-1][j-1]+ vect[i-1][j];
                        // result[j].push_back(result[j-1][i]+result[j-1][i-1])
                }
            }
        
        
        return vect;               */
        
        
        vector <vector <int> > result (numRows); 
        for (int i=0; i<numRows; i++) {
            for (int j = i; j<numRows; j++) {
                if ( i==0 || j == 0 || j == i)
                    result[j].push_back(1);
                else
                    result[j].push_back(result[j-1][i]+result[j-1][i-1]);
            }
        }
        return result;
        
    }
};
