#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size1 = s.size();
        int size2 = t.size();
        
        int i=0;
        int j=0;
        while(j< size2){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        if(i==size1){
            return true;
        }
        return false;
    }
};