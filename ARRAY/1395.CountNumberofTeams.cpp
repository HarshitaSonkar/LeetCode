class Solution {
public:
    int numTeams(vector<int>& rating) {
        
    int N = rating.size();
	  int res = 0;

   	for(int i = 0; i < N; i++){
		    for(int j = i + 1; j < N; j++){
			      for(int k = j + 1; k < N; k++){
                
			         	if((rating[i] > rating[j]  && rating[j] > rating[k]) || (rating[i] < rating[j] && rating[j] < rating[k])){
					
                    res++;
				        }
			       }
		     }
	   }

	return res;
        
    }
};
