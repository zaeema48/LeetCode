/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        string input=to_string(x);
        int j=input.length()-1;
        int i=0;
        while(i<j){
            if(input[i]!=input[j])
                return 0;
            i++;
            j--;
        }
        return 1;
    }
};