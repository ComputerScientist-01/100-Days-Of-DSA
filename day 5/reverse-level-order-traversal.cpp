#include "bits/stdc++.h"

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> levelOrder(Node *root)
{
    queue<Node *> q;
    vector<int> store;
    vector<vector<int>> ans;
    q.push(root);
    if (!root)
        return ans;

    while (!q.empty())
    {

        int sz = q.size();

        while (sz--)
        {
            Node *node = q.front();
            q.pop();

            store.push_back(node->data);

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }

        ans.push_back(store);
        store.clear();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

//    1
//  /  \ 
//  2   3
// / \ / \ 
// 4 5 6 7

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    return 0;
}
