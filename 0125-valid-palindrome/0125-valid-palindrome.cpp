class Solution {
public:
    bool isPalindrome(string s) {
        int size=s.size();
        // true and false return krna hai hume and saath mai sare letter small letter mai bhi jayegge ab 

        // isalnum se hum check kregge ki sare letter alphabet and number hi hai n
           int left=0,right=size-1;
           while(left<right){
            while(!isalnum(s[left]) && left<right){
                left++;
                continue;
            }
              while(!isalnum(s[right]) && left<right){
                right--;
                continue;
            }
             if (tolower(s[left])!=tolower(s[right])) return false;
            left++;
            right--;
           }
           return true;
    }
};