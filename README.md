# Polymorphism
Polymorphism in C++ allows objects of different classes to be treated as objects
of a common base class. It enables a single interface to represent different
underlying forms (data types). Polymorphism is achieved through the use of
virtual functions and inheritance.

## Key Concepts
1. **Inheritance**: Derived classes inherit from a base class.

2. **Virtual Functions**: Functions in the base class that can be overridden in
 derived classes.

3. **Base Class Pointers/References**: Using pointers or references to the base
 class to refer to objects of derived classes.

## How It Works
1. **Virtual Table (vtable)**: When a class has virtual functions, the compiler
 creates a virtual table (vtable) for that class. The vtable is an array of
 pointers to the virtual functions of the class.

2. **Virtual Pointer (vptr)**: Each object of a class with virtual functions
contains a hidden pointer (vptr) to the vtable of its class.

3. **Dynamic Dispatch**: When a virtual function is called on an object through
 a base class pointer or reference, the vptr is used to look up the function in
 the vtable, and the correct function (based on the actual object type) is
 called.

## FAQ
### 1. Why use pointers/references to the base class to refer to objects of derived classes ?
- Using base class pointers or references enables polymorphism, allowing for
dynamic dispatch and flexible behavior.
- It promotes code reusability by enabling generic functions and algorithms.
- It supports interface design by enforcing consistent interfaces across derived
 classes.
