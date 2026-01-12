***POINTER***
-- Holds the address of non pointer variable.
-- '*' is a symbol of pointer variable (in declaration case).
       non pointer variable
            ||
        holds the actual value. 

--Address always in integer.
          
          23++ = Actual value = 24
          23++ = Address value= 25 (because int memory has 2 bit size)


                  | 64 |
                  /    \
                 /      \
        (non pointer)  (pointer)
                /        \
            actual      address 
            value       value
            