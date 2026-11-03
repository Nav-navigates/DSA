#include<iostream>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int upper =0;

        for(int i=0; i<n; i++){
            char ch = word[i];
            if(ch >= 'A' && ch <= 'Z'){
                upper++;
            }
        }
        if(upper == n || upper == 0){
            return true;
        }else if(word[0] >= 'A' && word[0] <='Z' && upper <=1){
            return true;
        }
        return false;
        
    }
};