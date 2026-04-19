Algorithm TwoCitySchedCost(costs)

sort costs by (aCost - bCost)

total ← 0
n ← length(costs) / 2

for i ← 0 to n-1 do
    total ← total + costs[i].aCost

for i ← n to 2n-1 do
    total ← total + costs[i].bCost

return total
