# 🐉 C++ Z-Fighter RPG Simulator (OOP Capstone)

## 📖 About the Project
This project serves as a comprehensive capstone for advanced Object-Oriented Programming in C++. It combines multiple high-level architectural concepts into a single, unified simulation of an RPG character system.

By simulating a multi-path skill tree (Physical and Energy combat) that merges into an ultimate "Z-Fighter" class, this project successfully navigates the complexities of the Diamond Inheritance Problem, explicit Ambiguity Resolution, and strict object lifecycles.

## ✨ Features
*   **The Diamond Problem Solved:** Utilizes **Virtual Base Classes** to ensure a single, shared instance of the grandparent `Character` class is maintained in memory.
*   **Advanced Initialization:** Employs complex **Constructor Initialization Lists** to funnel parameterized data from the most derived class (`ZFighter`) directly to the virtual base class, bypassing intermediary parent classes.
*   **Explicit Method Overriding:** Resolves naming collisions in Multiple Inheritance by explicitly invoking overridden parent methods (`Striker::powerUp()`, `KiMaster::powerUp()`) within the child class.
*   **Static State Tracking:** Implements `static` variables to track the global number of active entities across the entire application.
*   **Memory Lifecycle Management:** Demonstrates predictable memory deallocation using **Destructors** triggered by artificial scope blocks within the execution thread.

## 🏆 Technical Learnings & Architecture
*   Proven mastery over the C++ compiler's strict execution orders and memory allocation rules regarding complex inheritance trees.
*   Successfully transitioned from basic syntax implementation to senior-level architectural design and state management.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Multiple Inheritance, Virtual Base Classes, Destructors, Static Variables, Ambiguity Resolution, Initialization Lists.

## 🛠️ How to Run
1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ zfighter_rpg.cpp -o zfighter_rpg
