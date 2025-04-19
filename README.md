__Push_Swap__

Push Swap is an algorithmic sorting project. It challenges you to sort a stack of integers 
using a limited set of operations and two stacks, while minimizing the number of moves.

The program takes a list of integers as input and outputs the optimal sequence of operations to sort them in ascending order.

__Here are the operations:__

    sa (swap a): Swap the first 2 elements at the top of the stack a. Does nothing if there is only one or none. 
    sb (swap b) : Swap the first 2 elements at the top of the stack b. Does nothing if there is only one or none. 
    ss : sa and sb at the same time. 
    pa (push a): Takes the first element on top of b and puts it on a. Does nothing if b is empty. 
    pb (push b): Takes the first element on top of a and puts it on b. Does nothing if a is empty. 
    ra (rotate a): Shifts all the elements of the stack a up by one position. The first element becomes the last. 
    rb (rotate b) : Shifts all the elements of the stack b one position upwards. The first element becomes the last one. 
    rr : ra and rb at the same time. 
    rra (reverse rotate a): Shifts all elements of the stack down one position. the stack a. The last element becomes the first. 
    rrb (reverse rotate b): Shifts all the elements of the stack b one position downwards. the stack b. The last element becomes the first. 
    rrr : rra and rrb at the same time.
    
__📋 Project Goals__

  - Develop a deep understanding of algorithm optimization.
  - Practice data structures like stacks, linked lists, and arrays.
  - Implement efficient sorting logic using limited commands.
  - Minimize time and space complexity while keeping code clean and modular.


__Visualizer__

Credit : __@o-reo__

<img src="https://github.com/user-attachments/assets/24d9209f-32d4-41b9-a3ea-be8cfa552332" width="600">
