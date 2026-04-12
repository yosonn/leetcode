Algorithm PathSum(root, targetSum)

result ← empty list
path ← empty list

DFS(node, currentSum)

if node is null then
    return

append node.val to path
currentSum ← currentSum + node.val

if node is leaf AND currentSum = targetSum then
    add copy of path to result

DFS(node.left, currentSum)
DFS(node.right, currentSum)

remove last element from path

return result
