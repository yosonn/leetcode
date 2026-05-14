Algorithm ValidPath(n, edges, source, destination)

build graph with n empty lists

for each edge [u, v] in edges do
    add v to graph[u]
    add u to graph[v]

visited <- array of n false
queue <- empty queue

visited[source] <- true
push source into queue

while queue is not empty do
    node <- pop queue

    if node = destination then
        return true

    for each next in graph[node] do
        if visited[next] = false then
            visited[next] <- true
            push next into queue

return false
