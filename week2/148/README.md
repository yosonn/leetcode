Algorithm SortList(head)

if head is null OR head.next is null then
    return head

mid ← find middle of list

split list into two halves

left ← SortList(head)
right ← SortList(mid)

return Merge(left, right)
