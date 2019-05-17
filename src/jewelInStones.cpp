//
// Created by akshay on 5/17/19.
//

#include "../include/all.h"

class Jewel{
public:

    int numJewelsInStones(string J, string S) {
        int jewels [256], stones[256];
        for (int i=0; i<256; i++)
        {
            jewels[i] = 0;
            stones[i] = 0;
        }
        for (auto c : J){

            jewels[int(c)] += 1;
        }
        for (auto c: S){

            stones[int(c)] += 1;
        }
        int count=0;
        for (int i =0; i<256; i++){
            if(jewels[i]>0 && stones[i]>0){
                // cout<<endl<<i<<endl;
                // cout<<"stones: "<<stones[i]<<" jewels: "<<jewels[i];
                count += stones[i];
            }
        }
        return count;
    }
};