#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r = ransomNote.size();
        int m = magazine.size();
        int count[26] ={0};

        for(int i=0; i<r; i++){
            int idx = ransomNote[i] -'a';
            count[idx]++;
        }
        for(int i=0; i<m; i++){
            int idx = magazine[i] -'a';
            count[idx]--;
        }
        for(int i=0; i<26; i++){
            if(count[i] >= 1){
                return false;
            }
            
        }
        return true;
    }
};