Algorithm ValidPalindrome(s)

l ← 0
r ← length(s) - 1

while l < r do

    while l < r AND s[l] is not alphanumeric do
        l ← l + 1

    while l < r AND s[r] is not alphanumeric do
        r ← r - 1

    if lowercase(s[l]) ≠ lowercase(s[r]) then
        return false

    l ← l + 1
    r ← r - 1

return true
