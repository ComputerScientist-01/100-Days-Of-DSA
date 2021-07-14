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

vector<double> averageOfLevels(Node *root)
{
    queue<Node *> q;
    vector<double> ans;
    int currlvl = 0;
    double sum, avg;

    if (!root)
        return ans;
    q.push(root);
    ans.push_back(root->data);

    while (!q.empty())
    {
        sum = 0;
        currlvl = 0;

        int sz = q.size();
        while (sz--)
        {
            Node *node = q.front();
            q.pop();

            if (node->left)
            {
                q.push(node->left);
                sum += node->left->data;
                currlvl += 1;
            }
            if (node->right)
            {
                q.push(node->right);
                sum += node->right->data;
                currlvl += 1;
            }
        }
        if (currlvl > 0)
        {

            ans.push_back(sum / currlvl);
        }
    }
    for (auto &i : ans)
    {
        cout << i << " ";
    }
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
    averageOfLevels(root);

    return 0;
}
