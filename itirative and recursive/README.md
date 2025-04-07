# Binary Search in C++ (Iterative and Recursive)

## 👤 Student Information
- **Name**: mujahid muhahammednur  
- **Student ID**: 5517/23  
- **Course**: DSA  

## 🧠 Algorithm

This program demonstrates two methods of performing **Binary Search**:

### ✅ Iterative Binary Search
- Uses a `while` loop to repeatedly divide the search space in half.
- Efficient for systems where recursion is costly or limited.

### ✅ Recursive Binary Search
- Uses function calls to divide the problem and search the sub-array.
- Simple and elegant implementation.

### Steps:
1. Given a **sorted array** and a **target value**.
2. Compute the middle index.
3. If the middle element matches the target, return the index.
4. If the target is less than the middle, search in the left sub-array.
5. If greater, search in the right sub-array.
6. Repeat until the element is found or the search space is empty.

## ▶️ How to Run the Code

1. Clone or download the project.
2. Open the terminal in the project directory.
3. Compile the program using:
   ```bash
   g++ binary_search.cpp -o binary_search