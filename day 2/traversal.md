# Tree Traversals

Two kinds of implementations :

1. Recursive
2. Iterative

## Preorder

1.  Visit the root.
2.  Traverse the left subtree, i.e., call Preorder(left-subtree)
3.  Traverse the right subtree, i.e., call Preorder(right-subtree)

## Inorder

1.  Traverse the left subtree, i.e., call Inorder(left-subtree)
2.  Visit the root.
3.  Traverse the right subtree, i.e., call Inorder(right-subtree)

## Postorder

1.  Traverse the left subtree, i.e., call Postorder(left-subtree)
2.  Traverse the right subtree, i.e., call Postorder(right-subtree)
3.  Visit the root.

### Time Complexity: O(n)

### Space Complexity :

worst space complexity is O(n) for skewed tree
best space complexity is O(Log n) for balanced tree
