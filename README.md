# Generic Shape System in C++

This repository contains a C++ project that demonstrates core Object-Oriented Programming (OOP) concepts, specifically focusing on **Generic Programming** and **Runtime Polymorphism**.

## 🚀 Overview

The project implements a flexible hierarchy of geometric shapes. It utilizes C++ Templates (`template <typename T>`) to allow calculations with different data types (e.g., `double`, `float`) without code duplication. It also handles edge cases, such as invalid dimensions, using standard exception handling mechanisms.

## 🛠 Key Features

* **Templates & Generics:** The `Shape`, `Circle`, and `Rectangle` classes are templated to support various arithmetic types.
* **Polymorphism:** Uses pure virtual functions (`area()`, `draw()`) to enforce a contract for derived classes.
* **Dynamic Memory Management:** Demonstrates the use of pointers to base classes and manual memory cleanup (`new`/`delete`).
* **Exception Handling:** Robust error checking for invalid inputs (e.g., negative radius/lengths) using `std::invalid_argument`.
* **STL Usage:** Utilizes `std::vector` for storing polymorphic objects.

## 📂 Code Structure

* `Shape<T>`: Abstract base class defining the interface.
* `Circle<T>`: Derived class implementing circular geometry logic.
* `Rectangle<T>`: Derived class implementing rectangular geometry logic.

## 💻 How to Run

1.  Clone the repository:
    ```bash
    git clone [https://github.com/KULLANICI_ADIN/REPO_ISMIN.git](https://github.com/KULLANICI_ADIN/REPO_ISMIN.git)
    ```
2.  Compile the source code using `g++` or `clang++`:
    ```bash
    g++ main.cpp -o shapes
    ```
3.  Run the executable:
    ```bash
    ./shapes
    ```

## 📝 Example Output

```text
drawing circle with radius 5.66
Area: 100.65

drawing rectangle with the width 18.1 and length 15.2
Area: 275.12

Exception caught: circle radius must be positive.
