This project focuses on understanding and implementing singly linked lists in C.
A linked list is a dynamic data structure made of nodes, where each node contains:

A string (str)

The length of that string (len)

A pointer to the next node (next)

The goal is to learn how linked lists work internally, how they differ from arrays, and how to manipulate them using fundamental memory operations such as malloc, free, and pointer manipulation.
You will build functions to print lists, count elements, add new nodes (at the beginning and at the end), and free the entire list.

All functions follow strict constraints such as Betty style, no global variables, no forbidden functions, and using the given list_t structure.

*Description of the Tasks:*

*Task 0-print_list.c*

Write a function that prints all the elements of a list_t list.

* *Prototype:*
size_t print_list(const list_t *h);

* The function prints each node in the format:
[len] str

* If str is NULL, it prints:
[0] (nil)

* Returns the number of nodes in the list.

* This task allows the use of printf.
-------------------------------------

*Task 1-ist_len.c*

Write a function that returns the number of elements in a list_t list.

* *Prototype:*
size_t list_len(const list_t *h);

* The function traverses the linked list and counts its nodes.

* Returns the total number of nodes.

* No printing is performed in this task.
--------------------------------------

*Task 2-add_node.c*

Write a function that adds a new node at the beginning of a list_t list.

* *Prototype:*
list_t *add_node(list_t **head, const char *str);

* The string must be duplicated using strdup.

* The new node becomes the new head of the list.

* Returns the address of the new node, or NULL if memory allocation fails.
--------------------------------------

*Task 3-add_node_end.c*

Write a function that adds a new node at the end of a list_t list.

* *Prototype:*
list_t *add_node_end(list_t **head, const char *str);

* The string must be duplicated using strdup.

* The function traverses the entire list to append the new node.

* Returns the address of the new node, or NULL if memory allocation fails.
---------------------------------------

Task 4-free_list.c

Write a function that frees a list_t list.

* *Prototype:*
void free_list(list_t *head);

* The function frees:

*1.* The duplicated string (str)

*2.* Each node in the list

* Ensures that no memory leaks remain after freeing all nodes.