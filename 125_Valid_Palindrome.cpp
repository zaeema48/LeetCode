/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int i=0;
        int j=s.length()-1;
        for(i=0; i<=j; i++){
            if(s[i]>=48 && s[i]<=57 || s[i]>=97 && s[i]<=122) //checking numbers and small characters only
                str+=s[i];  
            else if(s[i]>=65 && s[i]<=90)    //checking for capital characters
                str+=s[i]+32;    //converting caps into small letters using ASCII 
        }
        i=0, j=str.length()-1;
        while(i<j){
            if(str[i]=str[j]){
                i++;
                j--;
            }
            else 
                return false; 
            /* i=0, j=str.length()-1;
        while(i<j){
            if(str[i]!=str[j])
                return false;
            i++;
            j--;
          
        }*/
        }
        return true;
    }
};