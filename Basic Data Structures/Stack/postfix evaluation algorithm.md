## Postfix evaluation algorithm

1. create an empty stack st
2. traverse through every symbol 'x' of given postfix
   1. if 'x' is an operand, push it in st
   2. else op1 = st.pop() op2 = st.pop()
   3. compute op2 'x' op1 and push it back to st
3. return st.top()
