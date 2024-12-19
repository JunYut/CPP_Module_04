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

# Abstract Class & Pure Abstract Class
**Abstract Class** is a class that contains at least one pure virtual function. It cannot be instantiated directly and is intended to be used as a base class for other classes. However, an abstract class can also contain non-pure virtual functions and concrete (non-virtual) member functions.

**Pure Abstract Class** is a special type of abstract class that contains only pure virtual functions. It serves as a strict interface, requiring derived classes to provide implementations for all its pure virtual functions. A pure abstract class cannot have any concrete member functions.

## Key Differences
### 1. Pure Virtual Functions
**Abstract Class**: Contains at least one pure virtual function but can also have non-pure virtual functions and concrete member functions.

**Pure Abstract Class**: Contains only pure virtual functions and no concrete member functions.

### 2. Instantiation:
Both abstract and pure abstract classes cannot be instantiated directly.

### 3. Usage
**Abstract Class**: Can provide some default behavior through non-pure virtual functions and concrete member functions.

**Pure Abstract Class**: Defines a strict interface with no default behavior, requiring derived classes to implement all functionality.

# FAQ
## 1. Why use pointers/references to the base class to refer to objects of derived classes ?
- Using base class pointers or references enables polymorphism, allowing for
dynamic dispatch and flexible behavior.
- It promotes code reusability by enabling generic functions and algorithms.
- It supports interface design by enforcing consistent interfaces across derived
 classes.
