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

int maxLevelSum(Node *root)
{
    int level = 1;
    int max = INT_MIN;
    int ans;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int SIZE = q.size();
        int sum = 0;

        while (SIZE--)
        {
            Node *node = q.front();
            q.pop();
            sum += node->data;

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }

        if (max < sum)
        {
            max = sum;
            ans = level;
        }

        level++;
    }
    return ans;
}

int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     9
    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(9);
    cout << maxLevelSum(root);
    return 0;
}
