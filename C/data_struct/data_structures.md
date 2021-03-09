# Data Structures


    * Arrays 
        perhaps the most fundamental data structure is the array, which is defined as a primitive
in C and most other programming languages. An array is a fixed number of data items that are stored contigously and
that are accesible by an index . We refer to the i'th element of an array `a` as `a[i]`


    * Linked lists
        The second elementary data structure to consider is the linked list, which is defined as a primitive
in other languages, but not C.
However, C does provide basic operations that make it easy to use linked lists.
    The primary advantage of linked lists over arrays is that linked lists can grow and shrink in size during their lifetime.
In particular, their maximum size need not be known in advance. In practical applications, this often makes it possible to have
several data structures share the same space, without paying particular attention to their relative size at any time.
    Theres a photo of a linked list in the same folder.


    So every linked list has these two details: a value, and a pointer pointing to another node or to NULL if the respective node is the
last in the list. If you wanna learn even more you can check out Jacob Sorbers' video right here: https://youtu.be/VOpjAHCee7c.