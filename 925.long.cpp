class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int x = 0;
        int y = 0;
        
        while(x < name.size()){
        if(typed[y] == name[x]){
            x++;
            y++;
        }
        else{
            y++;
            if(y >= typed.size() and x <= name.size())
                return false;
        }
    }
    return true;
        
    }
};
