# Binary Tree

A binary tree is a tree where every node has at most two children.

# Properties of Binary Tree

## 1. Height

The height of a binary tree is the number of edges in the longest path from the root to a leaf.

## 2. Full

A binary tree is full if and only if every node has either 0 children or 2 children.

## 3. Perfect

A binary tree is perfect if and only if all interior nodes have two children and leaves are at the same level.

## 4. Complete

A binary tree is complete if and only if the tree is perfect up until the last level and all leaf nodes on the last level are pushed to the left.

# Puzzle time

## 1. Is a full tree complete ?

    No , if all the nodes on the last level are on the right instead of the left the tree will be full but not complete.

![puzzle1](https://user-images.githubusercontent.com/39644109/123084611-fcd7e400-d43e-11eb-84fa-1daf7616419e.png)

## 2. Is a complete tree full ?

    No , assuming the tree is complete we may have a case where one of the nodes on the last level to have just 1 child.

![puzzle2](https://user-images.githubusercontent.com/39644109/123085256-a6b77080-d43f-11eb-8071-13f1c3ba344b.png)
