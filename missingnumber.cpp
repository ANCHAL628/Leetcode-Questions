 #include<iostream>
 using namespace std ;
 int main(){
 int missingNumber(vector<int>& nums) {
        int XOR(0),XOR_1(0);
     for (int i = 0; i < nums.size() ; i++)   {
         XOR ^= nums[i];
     }
     for(int i=0;i<nums.size()+1;i++){
         XOR^=i;
     }
       
        return XOR;
    }
 }