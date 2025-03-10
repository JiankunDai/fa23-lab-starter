#include <stdio.h>
#include <stdlib.h>

// Structs allow you to hold data items of different types in a single variable
// Struct definitions can be used to declare a struct variable within your program
// Struct definitions are typically done outside of a function
struct Student {
    int id;
    char* name;
};

int main() {
  // TODO: declare a variable student1 of type struct Student
  // Note: this struct is stored on the stack
  struct Student student1;

  // TODO: set student1's id field to 5
  // Hint: the dot notation accesses a struct's fields
  student1.id = 5;

  // TODO: print out student1's id field
  printf("Student 1's ID: %d\n", student1.id);

  // You can also store a struct on the heap

  // TODO: allocate memory to store a struct Student on the heap
  // Hint: sizeof(x) can be used to find the number of bytes that
  //       x takes up in memory, instead of manually computing it
  struct Student* student2_ptr = malloc(sizeof(struct Student));

  // TODO: set student2_ptr's id field to 6
  // Hint: you need to use both the dot operator and the dereference operator
  //       and use parentheses to guarantee order of operations
  (*student2_ptr).id = 6;

  // TODO: print out student2_ptr's id field
  printf("Student 2's ID: %d\n", student2_ptr->id);

  return 0;
}
