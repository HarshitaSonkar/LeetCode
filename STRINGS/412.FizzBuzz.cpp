class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>res;
        
        for(int i=1;i<=n;i++){
         //   string s = to_string(i);
            if(i%3==0 && i%5==0){
                string c="FizzBuzz";
                res.push_back(c);
            }
            
         else   if(i%3==0 && i%5!=0){
               string c="Fizz";
                res.push_back(c);
            }
          else   if(i%5==0 && i%3!=0){
               string c="Buzz";
                res.push_back(c);
            }
           // string s = to_string(i);
            else
                //string s = to_string(i);
                res.push_back(to_string(i));
            
        }
        return res;
        
    }
};
