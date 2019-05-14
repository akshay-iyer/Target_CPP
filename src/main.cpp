//
// Created by akshay on 5/13/19.
//

#include "../include/main.h"
#include "../include/all.h"
int main(){

    // Q 540
    //Given a sorted array consisting of only integers where every element appears exactly twice except for one
    // element which appears exactly once. Find this single element that appears only once.
    //Input: [1,1,2,3,3,4,4,8,8]
    //Output: 2

//    SingleElement s;
//    vector<int> nums {1,1,2,2,3,3,4};
//    cout<<s.singleNonDuplicate(nums);
//*********************************************************************************

    //Q 515
    //You need to find the largest value in each row of a binary tree.
    //Input:
    //
    //          1
    //         / \
    //        3   2
    //       / \   \
    //      5   3   9
    //
    //Output: [1, 3, 9]

//    largestElement l;
//    vector<int> result;
//    TreeNode* root = new TreeNode(4);
//    root->left = new TreeNode(9);
//    root->right = new TreeNode(2);
//    root->left->left = new TreeNode(3);
//    root->left->right = new TreeNode(5);
//    root->right->right = new TreeNode(7);
//    result = l.largestValue(root);
//    for (auto element : result)
//        cout<<element<<" ";
//*********************************************************************************

    // Q. 946
    //Given two sequences pushed and popped with distinct values, return true if and only if this could
    // have been the result of a sequence of push and pop operations on an initially empty stack.

    //Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
    //Output: true
    //Explanation: We might do the following sequence:
    //push(1), push(2), push(3), push(4), pop() -> 4,
    //push(5), pop() -> 5, pop() -> 3, pop() -> 2, pop() -> 1

    //    Input: pushed = [1,2,3,4,5], popped = [4,3,5,1,2]
    //    Output: false
    //    Explanation: 1 cannot be popped before 2.

    validateStack v;
    vector<int> pushed {1,2,3,4,5};
    vector<int> popped {4,5,3,2,1};
    cout<<v.validateStackSeq(pushed, popped);
    return 0;
}