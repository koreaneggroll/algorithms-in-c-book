##Pushdown Stacks

    We have been concentrating on structuring data in order to insert, delete, or access items arbitrarily.
Actually, it turns out that for many applications, it suffices to consider various(rather stringent) restrictions on how
the data structure is accessed. Such restrictions are beneficial in two ways; first, they can alleviate the need for the program
using the data structure to be concerned with its details(for example, keeping track of links or indices of items); second, they allow
simpler and more flexible implementations, since fewer operations need be supported.
    The most important restricted-access data structure is the `pushdown stack`. Only two basic operations are involved; one can push
an item onto the stack(insert at the beggining) and pop an item (remove it from the beggining). A stack operates
somewhat like a busy executive's "in" box; work piles up in a stack, and whenever the executive is ready to do some work, he takes the top off.
This might mean that something gets stuck at the bottom of the stack emptied periodically. It turns out that sometimes a computer program
is naturally organised in this way, postponing some tasks while doing others, and thus pushdown stack