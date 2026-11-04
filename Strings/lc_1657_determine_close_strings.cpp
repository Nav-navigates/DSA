#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1 = word1.size();
        int l2 = word2.size();
        if(l1 != l2){
            return false;
        }
        int count1[26] ={0};
        int count2[26] ={0};
        for(int i=0; i<l1; i++){
            int idx = word1[i] -'a';
            count1[idx] ++;
        }
        for(int i=0; i<l2; i++){
            int idx = word2[i] -'a';
            count2[idx] ++;
            }
            for(int i = 0; i < 26; i++){
           if((count1[i] == 0 && count2[i] != 0) ||
       (count1[i] != 0 && count2[i] == 0)){
        return false;
    }
}


            sort( count1, count1 +26);
            sort(count2, count2 +26);
            for(int i=0; i<26; i++){
                 
                if(count1[i] != count2[i]){
                    return false;
                }
            }
            

            
        
        
        return true;
    }
};