# Pseudocode for Iterative Traversals

<br>

## Preorder

```cpp
iterativePreorder(node)

if (node = null)
    return
s —> empty stack
s.push(node)
while (not s.isEmpty())
    node —> s.pop()
    visit(node)
    if (node.right != null)
        s.push(node.right)
    if (node.left != null)
        s.push(node.left)

```

<br>

## Inorder

```cpp
iterativeInorder(node)

s —> empty stack
while (not s.isEmpty() or node != null)
    if (node != null)
        s.push(node)
        node —> node.left
    else
        node —> s.pop()
        visit(node)
        node —> node.right
```

<br>

## Postorder

```cpp
iterativePostorder(node)

s —> empty stack
t —> output stack
while (not s.isEmpty())
  node —> s.pop()
  t.push(node)

  if (node.left <> null)
    s.push(node.left)

  if (node.right <> null)
    s.push(node.right)

while (not t.isEmpty())
  node —> t.pop()
  visit(node)
```
