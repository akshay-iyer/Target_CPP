//
// Created by akshay on 5/13/19.
//

#include "../include/all.h"

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data) : val(data), left(NULL), right(NULL) {}
};

class largestElement{
public:
    vector <int> largestValue (TreeNode* root){
        vector <int> result;
        helper(result, root, 0);
        return result;
    }

    void helper (vector <int>& result, TreeNode* root, int depth){
        if(!root)
            return;

        if(depth == result.size())
            result.emplace_back(root->val);

        else{
            result[depth] = max(result[depth], root->val);
        }

        helper(result, root->left, depth+1);
        helper(result, root->right, depth+1);
    }
};