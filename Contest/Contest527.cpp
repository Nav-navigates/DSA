#include<iostream>
#include<string>
using namespace std;

//You are given two strings s1 and s2 of the same length.

//A mismatched segment is a maximal contiguous range of indices where the characters of s1 and s2 differ at every index.

//Return a 2D array containing [sub1, sub2] for each mismatched segment, where sub1 and sub2 are the corresponding substrings from s1 and s2, respectively. Return the segments in increasing order of their starting indices. If there are no mismatched segments, return an empty array.

//A substring is a contiguous non-empty sequence of characters within a string.

class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int i=0;
        vector<vector<string>> ans;
        int n = s1.size();
        while(i<n){
            if(s1[i] != s2[i]){
                int idx =i;
                 while(i<n && s1[i] != s2[i]){
            i++;
            }
                string sub1 = s1.substr(idx, i-idx);
            string sub2 = s2.substr(idx, i-idx);
                 ans.push_back({sub1, sub2});
            
        }else{
                 i++;
        }
            

           
           
        }
       
        return ans;
    }
};