# CPP questions

## Conversion constructors 
  - What are conversion constructors?
  - Why they are used?
  - What are its problems with it?
  - How we can fix its unwanted behaviour? ['explicit' keyword]

## Conversion operators
  - What are conversion constructors?
  - Why they are used?
  - What are its problems with it?
  - How we can fix its unwanted behaviour? ['explicit' keyword - C++11]
  - What is safe bool idiom?

## Forward declaration 
  - What can you forward declare?
  - What you cant forward declare?
  - Why cant you forward declare types that are used by value in headers?
  - Why should you not forward declare STL containers?
  - Why can you forward declare a plain enum? Is it possible with enum classes?
  - Why base class cannot be forward declared?
  
## Virtual
  - When and why virtual destructor is required?
  - Can destructor be pure virtual?
  - Can pure virtual functions have a body? If yes what is its use?
  - Can static method be virtual? Why/Why not?
  - What the 'virtual' keyword mean when inheriting a base class?
  - How virtual function call works in case of single inheritance?
  - How virtual function call works in case of multiple inheritance?
  - What is the “Dreaded Diamond/Diamond Problem” in case of multiple inheritance? 
  - When multiple inheritance is useful? (Interfaces)
  
## Templates
  - What is a template instance?
  - What is the problem if template definitions are in CPP file?
  - If a template definition is in CPP file, is there a way to use templates in limited scope? How? (template forward declarations)
  - What is template specialization? template partial specialization? non-type parameters?
  
## Const
  - What are the different uses of 'const'?
  - If a member function is const, what does it mean?
  - Difference between const pointer and a pointer to a const?
  - Difference between const pointer and const reference?
  - Why is const cast is required?
  - How to allow modification of a member variable from const member function? Example situation when this is useful?
  - How to make a variable captured lambda as a value non-const?
  
## C in C++
  - What are the different meanings of 'static' in different contexts?
  - Why extern keyword is used?
  - What is the difference between a function defined inside a 'extern C' block and outside?
  - Why name mangling is required in C++?
  
## C++11/14/17

## Multi-Threading WRT to c++ APIs
