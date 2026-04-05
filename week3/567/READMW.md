Algorithm CheckInclusion(s1, s2)

if length(s1) > length(s2) then
    return false

count1 ← array[26] = 0
count2 ← array[26] = 0

for each char in s1 do
    count1[char]++

for i ← 0 to length(s2)-1 do

    count2[s2[i]]++

    if i ≥ length(s1) then
        remove s2[i - length(s1)] from count2

    if count1 = count2 then
        return true

return false
