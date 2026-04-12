Algorithm DeepestLeavesSum(root)

create queue
push root into queue

while queue is not empty do

    levelSize ← queue.size()
    sum ← 0

    repeat levelSize times:

        node ← queue.front()
        pop queue

        sum ← sum + node.val

        if node.left exists then
            push node.left

        if node.right exists then
            push node.right

return sum
