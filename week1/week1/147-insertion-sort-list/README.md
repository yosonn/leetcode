Algorithm InsertionSortList(head)

create dummy node

current ← head

while current is not null do

  nextNode ← current.next

  position ← dummy

  while position.next is not null AND position.next.val < current.val do
    position ← position.next

  insert current after position

  current ← nextNode

return dummy.next
