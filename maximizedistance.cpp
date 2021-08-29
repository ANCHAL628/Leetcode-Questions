#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int maximum_distance(vector<int> nums) {
    int i ;
    int maximum = 0 ;
    int lower = -1 ;
    for (int i = 0 ; i < nums.size() ; i++){
        if (nums[i] == 0){
            continue ;
        }else{
            if (lower == -1) {
                maximum = max(i , maximum) ;
                lower = i ;
            }
            maximum = max(maximum , (i - lower)/2) ;
            lower = i ;
            
        }
    }
    int n = nums.size() ;
    if (nums[n-1] == 0){
        maximum = max(maximum , n-1-lower) ;
    }
    return maximum ;
}
int main(){
    vector<int>nums = {0,0,1,0,0,1} ;
    cout << maximum_distance(nums) ;
}