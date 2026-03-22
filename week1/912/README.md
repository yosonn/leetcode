Algorithm MergeSort(A, left, right)

if left ≥ right then
    return

mid ← (left + right) / 2

MergeSort(A, left, mid)
MergeSort(A, mid + 1, right)

Merge(A, left, mid, right)
