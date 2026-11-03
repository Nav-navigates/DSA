#include<iostream>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        int n= s.size();
        for(int i=0; i<n; i++){
            char ch = s[i];
            if(ch >= 'A' && ch <= 'Z'){
                s[i] = ch - 'A' + 'a';
            }
        }
        return s;
    }
};