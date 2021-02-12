

#include "main.h"

int main() {

    // this is a statically declared integer. it is created at compile time.
    int i1;
    
    /* this is a pointer to an int. a pointer is a memory location.
     * this is not an int, it is an address of a potential int or int array
     * it will be used here to create a dynamically allocated int.
     * notice the * in front of i2. this is reference operator that is used
     * to denote we want a pointer to an int and not a normal int. */
    int *i2;

    // this creates an actual int and assigns the memory location to i2 at run time
    i2 = new int;
    
    /* i1 and i2 can both be used as integers, but i1 is an integer directly
     * whereas i2 is a memory location pointing at an integer. the integer
     * at the location i2 has no name, it only has a memory location, however
     * we can still use i2 just like a normal integer. */
    
    // this assigns the number 10 to i1
    i1 = 10;
    
    // this assigns the number 20 to the location pointed to by i2
    *i2 = 20;
    
    /* let's print them to prove it. notice the * in front of i2, this is a de-reference
     * operator. it means do not access the memory address itself, access the location
     * the address points at. */
    cout << "the number in i1 is: " << i1 << endl;
    cout << "the number in the location i2 points to is: " << *i2 << endl;
    cout << endl;
    
    /* if you want to access the memory locations, you can do that too, using
     * the address operator & on i1 or just using i2 as-is.
     */
    cout << "the address of i1 is: " << &i1 << endl;
    cout << "the address i2 points to is: " << i2 << endl;
    cout << endl;
    
    /* using memory addresses allow you to pass by reference. you can
     * alter a variable directly in a function, and you do not have
     * to return the new value, it's altered directly through the address. */
    cout << "the number in i1 was: " << i1 << endl;
    add_100(&i1); // notice we use the "address of" operator here
    cout << "now it is: " << i1 << endl;
    cout << endl;
    
    cout << "the number in the address i2 points to was: " << *i2 << endl;
    add_100(i2); // notice we DO NOT use the "address of" operator here
    cout << "now it is: " << *i2 << endl;
    cout << endl;
    
    /* NOTE: YOU MUST DELETE ALLOCATED MEMORY WHEN YOU ARE DONE WITH IT!
     * we're done with the memory i2 points to, so we can delete it.
     * i2 is NOT deleted. The memory allocated to i2 is deleted.
     * i2 is still a valid and usable pointer. */
    delete i2;
    
    
    
    // we can extend this concept to create dynamic arrays at run time
    
    // this is a statically declared array. it is created at compile time.
    int array1[SIZE];
    
    /* this again is a simple pointer to an int. it will be used to create
     * a dynamically allocated array */
    int *array2;
    
    // the new array is created at run time like this
    array2 = new int[SIZE];
    
    /* all arrays automatically pass by value. so regardless of how it was
     * created we can pass them to functions and the functions have direct
     * access and control over them. we do not need * or & to use array
     * names because all arrays are pointers, regardless of how they
     * were created.
     */
    
    fill_array(array1, SIZE, 10); // this will fill array1 with the number 10
    fill_array(array2, SIZE, 20); // this will fill array1 with the number 20
    
    display_array(array1, SIZE); // this will display array1
    display_array(array2, SIZE); // this will display array2
    
    // we're done with array2 so we must delete the allocated memory
    delete[] array2;

    return 0;
}

