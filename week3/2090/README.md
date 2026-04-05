Algorithm GetAverages(nums, k)

n ← length(nums)
result ← array of size n filled with -1

windowSize ← 2*k + 1

if windowSize > n then
    return result

sum ← 0

for i ← 0 to n-1 do

    sum ← sum + nums[i]

    if i ≥ windowSize then
        sum ← sum - nums[i - windowSize]

    if i ≥ windowSize - 1 then
        center ← i - k
        result[center] ← sum / windowSize

return result
