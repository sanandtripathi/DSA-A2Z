/*First used a for loop for converting all capital letters to small letters, 
then another for loop for pushing all alphabets & numbers into another string, then used 
the last for loop to see if the element at 'i'th position mathches the element at 'n-i-1'th position
or not (basically condition of a palindrome). Finally put the condition that if it does not match then return false, otherwise return true.
This is very beginner freindly approach, without using any pointers or any tough data structures*/
class Solution {
public:
    bool isPalindrome(string s) {

        string s2;
        int n=s.size();
        for(int i=0;i<n;i++){
            if((int)s[i]>=65&&(int)s[i]<=90) s[i]=(int)s[i]+32;
        }
        for(int i=0;i<n;i++){
            if(((int)s[i]>=97&&(int)s[i]<=122)||((int)s[i]>=48&&(int)s[i]<=57)) s2.push_back(s[i]);
        }
        int n2=s2.size();
        for(int i=0;i<n2;i++){
            if(s2[i]!=s2[n2-i-1]) return false;
        }
        return true;
        
    }
};
