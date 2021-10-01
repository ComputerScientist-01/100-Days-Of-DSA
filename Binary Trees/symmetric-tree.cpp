#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <unordered_map>
#include <stack>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
public:
    bool isSymmetricUtil(TreeNode* left, TreeNode* right){
        if(left == nullptr && right == nullptr){
            return true;
        }

        //one of them is not null, hence not symmetric
        if(left == nullptr || right == nullptr){
            return false;
        }

        if(left->val != right->val){
            return false;
        }

        return ((isSymmetricUtil(left->left, right->right)) && (isSymmetricUtil(left->right, right->left)));
    }

    bool isSymmetric(TreeNode* root) {
        return isSymmetricUtil(root->left, root->right);
    }
};