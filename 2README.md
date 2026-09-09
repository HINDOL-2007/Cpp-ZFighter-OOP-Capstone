# 🐉 C++ Z-Fighter RPG Simulator (v1.2)

## 📖 About the Project
This capstone project simulates a multi-path RPG character system, acting as a masterclass in advanced C++ Object-Oriented Programming. Version 1.2 introduces production-grade optimizations including Abstract Base Classes, reference passing, constant member functions, and transformation state management.

## ✨ V1.2 Architecture Upgrades
*   **Abstract Base Class:** The grandparent `Character` class now utilizes a pure virtual function (`virtual void powerUp() = 0;`), enforcing a strict contract that all derived classes must implement their own power-up logic.
*   **State Management:** Implemented an `isTransformed` boolean flag to prevent redundant power-scaling, ensuring the Super Saiyan multiplier can only be applied once per object lifecycle.
*   **Memory & Performance Optimization:** 
    *   Upgraded string parameters to use constant references (`const string &`), eliminating expensive string copy operations during instantiation.
    *   Applied `const` correctness to getter methods (`showStats() const`) to guarantee data immutability.
    *   Implemented a `virtual` destructor in the base class to prevent memory leaks during polymorphic deletion.

## 📊 Complexity Analysis
*   **Time Complexity:** $O(1)$
    *   All operations—including object instantiation, state checks, arithmetic scaling during `powerUp()`, and `showStats()` rendering—execute in constant time. There are no iterative loops or recursive dependencies.
*   **Space / Memory Complexity:** $O(1)$
    *   The memory footprint remains constant. The program allocates a fixed number of bytes for fundamental data types (`int`, `bool`), a `string` (optimized via SSO/reference), and underlying vtable pointers required for virtual inheritance and polymorphism. No dynamic scaling data structures are used.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Abstract Classes, Pure Virtual Functions, Diamond Problem Resolution, Pass-by-Reference, Const Correctness, Polymorphic Preparation.

## 🛠️ How to Run
1. Clone this repository and compile:
   ```bash
   g++ zfighter_rpg.cpp -o zfighter_rpg
