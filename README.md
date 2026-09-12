# 🐉 C++ Z-Fighter RPG Simulator (v1.3)

## 📖 About the Project
This capstone project simulates a multi-path RPG character system, acting as a masterclass in advanced C++ Object-Oriented Programming. Version 1.3 introduces dynamic object lifecycle messaging, allowing derived classes to customize their deallocation outputs upon destruction.

## ✨ V1.3 Architecture Upgrades
*   **Dynamic Destructor Messaging:** Replaced hardcoded destructor logs with a dynamic `exitLine` string, allowing different character tiers to output unique messages when they are cleared from memory.
*   **Ternary Initialization:** Utilized a ternary operator (`exit.empty() ? ... : ...`) directly within the constructor's initialization list to elegantly handle fallback string generation without cluttering the constructor body.
*   **Default Arguments:** Leveraged default constructor parameters (`const string &exit = ""`) to keep the base class flexible for standard entities while allowing the `ZFighter` derived class to explicitly inject a custom exit string up the virtual inheritance chain.

## 📊 Complexity Analysis
*   **Time Complexity:** $O(1)$
    *   All operations execute in constant time. The ternary string evaluation and memory deallocation string prints happen instantly upon object destruction.
*   **Space / Memory Complexity:** $O(1)$
    *   Memory footprint remains constant. An additional string member (`exitLine`) is allocated per object, but the overall architecture remains strictly bounded with no infinitely scaling structures.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Dynamic Destructors, Ternary Operators, Default Constructor Arguments, Abstract Classes, Diamond Problem Resolution.

## 🛠️ How to Run
1. Clone this repository and compile:
   ```bash
   g++ zfighter_rpg.cpp -o zfighter_rpg
