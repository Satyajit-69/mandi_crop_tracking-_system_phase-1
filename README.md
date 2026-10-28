# Mandi Crop Price Tracker

## Overview
Mandi Crop Price Tracker is a menu-driven C++ application developed to manage crop records and their prices. It allows users to add crop details, view all records, search for a crop using its ID, and generate a summary report.

## Features
- **Create Crop:** Add crop name, mandi, price per quintal, and date.
- **Automatic Crop ID:** Generate unique IDs using a static data member.
- **View All Crops:** Display all stored crop records.
- **Search by ID:** Find a specific crop using its Crop ID and a pointer to an object.
- **Summary Report:** Display the total number of records, average price, highest price, and lowest price.
- **Object-Oriented Design:** Use classes, encapsulation, inline getters, and a friend function.
- **Array-Based Storage:** Store crop records in a fixed-size array of `Crop` objects.

## Technologies Used
- C++
- Standard Template Library string class (`std::string`)
- Object-Oriented Programming (OOP)


## Menu Options

1. Create Crop
2. View All Crops
3. Search Crop by ID
4. Summary Report
0. Exit

## Concepts Demonstrated
- Classes and objects
- Encapsulation using private data members
- Static data members for automatic ID generation
- Inline getter functions
- Friend functions
- Arrays of objects
- Pointers to objects
- String handling
- Functions and switch-case statements

## Storage
Crop records are stored in an array of up to 100 `Crop` objects. The records remain in memory while the program runs and are not saved permanently to a file.

## Conclusion
The Mandi Crop Price Tracker demonstrates fundamental C++ programming and object-oriented concepts through a simple crop-record management application.
