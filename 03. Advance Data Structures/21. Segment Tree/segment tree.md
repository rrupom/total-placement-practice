## Segment Tree

- Used for fixed sized arrays and following two types of operations

  - A. Range Query : O(log n) typically
  - B. Update a value : O(log n) typically

- Required theta(n) preprocessing time and theta(n) auxillary space

## Size of segment tree

n -> number of elements in input array \
size = 2 \* 2^ceil(log2(n)) - 1 \
it is approximately 4\*n \

if number of input elements n is power of two, then total array elements is 2n-1
else 2x-1 where x is the smallest power of 2 greater than
x = 2^ceil(log2n) \
so n = 2\*x - 1
