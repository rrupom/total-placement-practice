## Graphs

- There are two types of graph:
  - Directed Graph
  - Undirected Graph

---

### Directed Graph

- Sum of degrees = 2 \* |E|
- Maximum Nunber of Edges = |v| \* (|v| -1) / 2

---

### Undirected Graph

- Sum of indegrees = |E|
- Sum of outdegrees = |E|
- Maximum number of edges = |V| \* (|V|-1)

---

### Graph Representation

- Adjacency Matrix
- Adjacency List

---

### Properties of Adjacency Matrix

- Space Required : Theta(V\*V)
- Operations:
  - Check if u and v are adjacent: theta(1)
  - Find all vertices adjacent to u: thete(v)
  - Find degree of u: theta(v)
  - Add/Remove an Edge: theta(1)
  - Add/Remove a vertex: theta(v\*v)

---

### Adjacency List

- An array of lists where lists are most popularly represented as :
  - Dynamic Sized Arrays
  - Linked Lists
- Space Required:
  - Directed: theta(V+E)
  - Undirected: theta(v+ 2\*E)
- Operations:
  - Check if there is an edge from u to v: O(v)
  - Find all adjacent of u: theta(degree(u))
  - Find degree of u: theta(1)
  - Add an edge: theta(1)
  - Remove an adge: O(u)

---
