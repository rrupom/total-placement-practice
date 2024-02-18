## Disjoint Set Data Structures

I/P: \
n=4
makeFriends(0,1) -> (0,1), (2), (3), (4) \
makeFriends(1,3) -> (0,1,3), (2), (4) \
areFriends(0,2) -> false \
areFriends(0,1) => true \
areFriends(0,3) => true

Simple Solution:

- Use Ajcency List or Adjacency Matrix Representation
  - Adjacency List: makeFriends() and areFriends() are O(n)
  - Adjacency Matrix: makeFriends() is theta(n) and areFriends() is theta(1)

Better Solution (Disjoint Set)

- find(x): Returns a representative of x's set (or Social Netword)
- union(x,y): Combines sets of x and y (same as makeFriend())

```c++
bool areFriends(x,y) {
    return (find(x) == find(y));
}

```

```c++
void makeFriends(x,y) {
    union(x,y);
}
```
