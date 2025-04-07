#include <iostream>
using namespace std;

// Iterative Binary Search
int binarySearchIterative(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// Recursive Binary Search
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == target) return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target);
    else
        return binarySearchRecursive(arr, left, mid - 1, target);
}

// Function to print result
void printResult(int index, string method) {
    if (index != -1)
        cout << method << ": Element found at index " << index << endl;
    else
        cout << method << ": Element not found in the array." << endl;
}

int main() {
    // Sorted array for binary search
    int arr[] = {2, 4, 6, 8, 10, 14, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    // Iterative approach
    int resultIter = binarySearchIterative(arr, size, target);
    printResult(resultIter, "Iterative");

    // Recursive approach
    int resultRec = binarySearchRecursive(arr, 0, size - 1, target);
    printResult(resultRec, "Recursive");

    return 0;
}