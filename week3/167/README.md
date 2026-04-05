Algorithm TwoSum(numbers, target)

l ← 0
r ← length(numbers) - 1

while l < r do

    sum ← numbers[l] + numbers[r]

    if sum = target then
        return [l+1, r+1]

    else if sum < target then
        l ← l + 1

    else
        r ← r - 1
