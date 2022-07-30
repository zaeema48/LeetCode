/*
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int x = s.length(); 
        int y = t.length();
        if(x!=y)         
        return false;
        
        //s and t consist of lowercase English letters.
        int arr[26]={0};        
        for(int i=0; i<x; i++){
            arr[s[i]-'a']++; //storing the frequency of character at its index using ASCII keys 
            arr[t[i]-'a']--; //decreasing the frequency of t
        }
        for(int i=0; i<26; i++){ //checking every element of array is 0 or not 
            if(arr[i]!=0)
                return false; 
        }
        return true; 
    }
};