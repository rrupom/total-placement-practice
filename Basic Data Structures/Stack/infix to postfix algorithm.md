## Infix to Postfix

1. Create an empty stack st
2. Do the following for every character x from the left to right in the infix string
3. if x is

   1. operand: output it
   2. left parenthesis: put it to the st
   3. right parenthesis: pop from st until left parenthesis is found. output the popped operators
   4. operator: if st is empty, push x to st. else compare with st top

   - highest precedence (than st top) push to st
   - lower precedence, pop st top and output until a higher precedence operator is found. then push x to st
   - equal precedence, use associativity

4. Pop and output everything from st
