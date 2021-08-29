#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<int> missingRange(vector<int>nums,int lower ,int upper) {
    vector<string>missing_range ;
    if (nums.size() == 0) { //if size  is zero checking whether range are equal  or different
        if (lower == upper) return missing_range.push_back(to_string(nums[i])) ;
        else  return missing_range.push_back(lower)+"->"+missing_range(to_string(nums[i])) ;

    }else{
        long long previous = lower - 1 ; 
        for (int i = 0 ; i <= nums.size() ; i++){
            long long curr = (i == nums.size()) ? upper + 1 : nums[i] ;
            if (curr - prev >= 2) {
                if (prev + 1 == curr - 1) {
                    return missing_range.push_back(to_string(prev)) ;
                }else{
                    return missing_range.push_back(prev)+"->"+missing_range(to_string(curr))
                }
            }
            prev = curr ;

        }
    }
}
int main(){
    int nums[] = {0,2,3,5,7} ;
    missingRange(nums , 0, 9) ;
}

