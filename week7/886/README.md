Algorithm PossibleBipartition(n, dislikes)

build graph with n+1 empty lists

for each dislike [a, b] in dislikes do
    add b to graph[a]
    add a to graph[b]

color <- array of n+1 zeros

for person <- 1 to n do
    if color[person] != 0 then
        continue

    color[person] <- 1
    queue <- empty queue
    push person into queue

    while queue is not empty do
        current <- pop queue

        for each next in graph[current] do
            if color[next] = 0 then
                color[next] <- -color[current]
                push next into queue
            else if color[next] = color[current] then
                return false

return true
