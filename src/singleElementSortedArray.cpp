//
// Created by akshay on 5/13/19.
//

#include "../include/all.h"

class SingleElement {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (!(n%2)){
            cout<<"length is not odd";
            return -1;
        }
        for (int i = 0; i<n-1; i+=2){
            if(nums[i] != nums[i+1])
                return nums[i];
        }
        return nums[n-1];
    }
};
