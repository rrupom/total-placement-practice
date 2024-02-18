## Prefix evaluation algorithm

1. Same as postfix evaluation
2. Push operands
3. When operator:
   1. ob1 = st.pop()
   2. ob2 = st.pop()
   3. calculate ob1 operator ob2 and push it again in the stack
4. return stack top
