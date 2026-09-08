/*
We use malloc to allocate memory for an integer and check if the memory allocation was successful.
We then assign a value to this memory, print it, and finally, free the memory using free to avoid memory leaks.

Setting the pointer to nullptr after freeing is a good practice to prevent dangling pointers.
*/

#include <iostream>
#include <cstdlib>  // For malloc and free

int main() {
    int *ptr = (int*) malloc(sizeof(int));  // Allocating memory for an integer
    if (ptr == nullptr) {
        std::cout << "Memory allocation failed" << std::endl;
        return -1;  // Return an error if memory allocation failed
    }

    *ptr = 5;  // Assigning value to the allocated memory
    std::cout << "Value at pointer: " << *ptr << std::endl;

    free(ptr);  // Freeing the allocated memory
    ptr = nullptr;  // Setting pointer to nullptr after freeing memory

    return 0;
}