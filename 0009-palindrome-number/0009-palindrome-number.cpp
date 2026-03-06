class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0|| x%10==0 && x!=0) return false;
      
      int revnum=0;
        while(x>revnum){
            revnum=revnum*10+x%10;
            x/=10;
        }

        if(x==revnum || x==revnum/10){
            return true;
        }
        else{
            return false;
        }
    }
};