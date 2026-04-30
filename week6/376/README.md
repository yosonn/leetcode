Algorithm WiggleMaxLength(nums)

if length(nums) < 2 then
    return length(nums)

up <- 1
down <- 1

for i <- 1 to length(nums)-1 do
    if nums[i] > nums[i-1] then
        up <- down + 1
    else if nums[i] < nums[i-1] then
        down <- up + 1

return max(up, down)
