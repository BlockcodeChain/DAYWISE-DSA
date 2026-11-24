class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(auto elem:address){
            if(elem =='.'){
             result +="[.]";
            }
             else result+=elem;
        }
        return result;
    }
};