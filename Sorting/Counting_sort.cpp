#include<iostream>
using namespace std;

void Counting_sort(int arr[], int n){
    if (n <= 0) return;
    int freq[100000] = {0};
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for(int i=0; i<n; i++){ //find min and max in array
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }
    for(int i=0; i<n; i++){ // make freq array
        freq[arr[i]]++;
    }
    for(int i= minVal, j=0; i<= maxVal; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Counting_sort(arr , n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}