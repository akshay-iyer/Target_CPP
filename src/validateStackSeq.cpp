//
// Created by akshay on 5/14/19.
//

#include "../include/all.h"

class validateStack{
public:
    bool validateStackSeq(vector<int>& pushed, vector<int>& popped){
        stack<int> stack1;
        int popped_idx = 0;
        for (int i=0; i<pushed.size(); i++){
            cout<<"pushing "<<pushed[i]<<endl;
            stack1.push(pushed[i]);

            while(!stack1.empty() && stack1.top() == popped[popped_idx]){
                cout<<"popping: "<<stack1.top()<<endl;
                stack1.pop();
                popped_idx++;
            }
        }

        if(stack1.empty())
            return true;
        else
            return false;
    }
};
