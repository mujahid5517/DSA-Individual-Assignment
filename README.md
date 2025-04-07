# Second Largest Number in Array

## 👤 Student Information
- **Name**: mujahid muhammednur
- **Student ID**: 5517/23
- **Course**: DSA 

## 🧠 Algorithm
1. Initialize two variables: `largest` with the first element, and `secondLargest` with -1.
2. Loop through the array starting from the second element.
3. For each element:
   - If it is greater than `largest`, assign `secondLargest = largest`, and update `largest` with the current element.
   - Else if it is greater than `secondLargest` and less than `largest`, update `secondLargest` with the current element.
4. After the loop, `secondLargest` will contain the second largest number in the array.

## ▶️ How to Run the Code
1. Clone the repository to your local machine.
2. Open the terminal and navigate to the repository directory.
3. Compile the C++ code using:
   ```bash
   g++ second_largest.cpp -o second_largest

# Smallest number in arry

   ## 🧠 Algorithm
1. Initialize a variable `minNumber` with the first element of the array.
2. Loop through the array starting from the second element.
3. For each element:
   - If it is less than `minNumber`, update `minNumber` with the current element.
4. After the loop, `minNumber` will contain the smallest number in the array.

## ▶️ How to Run the Code
1. Clone the repository to your local machine.
2. Open the terminal and navigate to the repository directory.
3. Compile the C++ code using:
   ```bash
   g++ smallest_number.cpp -o smallest_number