# C++ Programming For Science - Assignment 4

This template repository is the starter project for C++ Programming For Science Assignment 4. Written in C++, and tested with CMake/Catch2.

### Question(s)

1. Vehicle Inheritance Hierarchy:

Implement a class hierarchy for vehicles. Create an abstract base class `Vehicle` with virtual methods for returning the number of wheels and the type of vehicle. Derive two classes from it: `Car` and `Motorcycle`. Override the necessary methods and add specific attributes.

2. Building and Room Management System:

Create a class hierarchy where `Building` is the base class, and `Office` and `Residence` are derived classes. The base class should include attributes like address and size (in square meters). Each derived class should add specific attributes and implement a method to calculate and return the monthly maintenance cost based on specific rules.

3. Animal Kingdom Taxonomy:

Design an abstract base class `Animal` with virtual functions `speak()` and `category()`. Create derived classes for different types of animals, such as `Dog`, `Cat`, and `Bird`, and implement their behavior and categorization.


### Setup Command

`make clean`

### Run Command

`make test`