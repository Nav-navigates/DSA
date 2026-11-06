#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int l = s.size();
        int count[26] = {0};

        for(int i=0; i<l;i++){
            int idx = s[i] - 'a';
            count[idx]++;
        }
        for(int i=0; i<l; i++){
         int idx = s[i] - 'a';
             if(count[idx] == 1){
          return i;
    }
}
        return -1;
    }
};