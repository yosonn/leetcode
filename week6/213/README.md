Algorithm Rob(nums)

if length(nums) = 1 then
    return nums[0]

return max(RobRange(nums, 0, length(nums)-2),
           RobRange(nums, 1, length(nums)-1))

Algorithm RobRange(nums, left, right)

prev2 <- 0
prev1 <- 0

for i <- left to right do
    current <- max(prev1, prev2 + nums[i])
    prev2 <- prev1
    prev1 <- current

return prev1
