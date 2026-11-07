#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        int n= s.size();
        int count[128] ={0};
        bool odd = false;

        for(int i=0; i<n; i++){
            count[s[i]]++;
        }
        int pal =0;
        for(int i=0; i<128; i++){
            if(count[i] != 0 && count[i] %2 == 0){
                pal+= count[i];
            }else if(count[i] != 0 && count[i] %2 != 0){
                pal+= count[i] -1;
                odd =true;
            }
            
            
        }
        if(odd){
                pal++;
            }
            
        return pal;
    }
};