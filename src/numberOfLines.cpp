//
// Created by akshay on 5/16/19.
//

#include "../include/all.h"

class Lines{
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector <int> result;
        int sum = 0, line_number = 1;
        for (auto letter : S){
            //cout<<widths[int(letter) - 97]<<" ";
            sum += widths[int(letter) - 97];
            if(sum>100){
                sum = widths[int(letter) - 97];
                line_number++;
            }
        }
        result.emplace_back(line_number);
        result.emplace_back(sum);
        return result;
    }
};
