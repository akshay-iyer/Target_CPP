//
// Created by akshay on 5/13/19.
//

#include "../include/main.h"
#include "../include/all.h"
int main(){

    // Q 540
//    SingleElement s;
//    vector<int> nums {1,1,2,2,3,3,4};
//    cout<<s.singleNonDuplicate(nums);

    //Q 515
    largestElement l;
    vector<int> result;
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(9);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(7);
    result = l.largestValue(root);
    for (auto element : result)
        cout<<element<<" ";


    return 0;
}