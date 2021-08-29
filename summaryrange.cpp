#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<string> colectiveRange(vector<input>element) {
    vector<string>ranges ;
    for (int i = 0 ; i < n ; i++){
        int tm = i ;
        while ( i != elements.size()-1 && nums[i]+1 == nums[i+1]){ // checking whether  end point is reached or not
            i++ ;
        }
        if ( i == tm){ //mean elements are either equall or end point is reached
            ranges.push_back(to_string(nums[i])) ;
        }else{ // means end of range
            ranges.push_back(to_string(nums[tm]) + "->" + to_string(nums[i])) ;
        }
    }
    return ranges; 

}
int main(){
    //accepting input from user
    int number ;
    cin >> number ;
    vector<int>input_element ;
    for (int i = 0 ; i < n ; i++) {
        int a ;
        cin >> a ;
        input_element.push_back(a) ;
    }
    colectiveRange(input_element) ;


}