## Algorithm to convert Infix to Prefix

1. Create an empty stack st
2. Create an empty string prefix
3. Do following for every character 'c' from right to left
4. if 'c' is:
   1. operand: push it to prefix
   2. right parenthesis: push to st
   3. left parenthesis: pop from st until right parenthesis is found. append the popped character to prefix
   4. operator: if st is empty, push 'c' to st. else compare with st top
   - higher precedence (than st top): push c to st
   - lower precedence: pop st top and append the popped item to prefix until a higher precedence operator is found or st become empty. push 'c' to st
   - equal precedence: use associativity
5. Pop everything from st and append to prefix
6. Reverse prefix for final answer
