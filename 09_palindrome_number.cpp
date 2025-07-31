class Solution {
public:
    bool isPalindrome(int x) {

        int real_n=x;
        long int rev_n=0;
        while (x>0){
            int digit=x%10;
            rev_n=rev_n*10+digit;
            x=x/10;
        }
        if (rev_n==real_n) return true;
        else return false;
        
    }
};
