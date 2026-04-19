Algorithm SmallestRangeII(nums, k)

sort nums

answer ← nums[last] - nums[0]

for i ← 0 to n-2 do

    high ← max(nums[i] + k, nums[last] - k)

    low ← min(nums[0] + k, nums[i+1] - k)

    answer ← min(answer, high - low)

return answer
