#include <iostream>
#include <vector>
using namespace std;

// Recursive implementation
int ternarySearchRecursive(const vector<int>& arr, int key, int left, int right) {
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key) return mid1;
        if (arr[mid2] == key) return mid2;

        if (key < arr[mid1]) {
            return ternarySearchRecursive(arr, key, left, mid1 - 1);
        } else if (key > arr[mid2]) {
            return ternarySearchRecursive(arr, key, mid2 + 1, right);
        } else {
            return ternarySearchRecursive(arr, key, mid1 + 1, mid2 - 1);
        }
    }
    return -1;
}

// Iterative implementation
int ternarySearchIterative(const vector<int>& arr, int key) {
    int left = 0;
    int right = arr.size() - 1;

    while (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key) return mid1;
        if (arr[mid2] == key) return mid2;

        if (key < arr[mid1]) {
            right = mid1 - 1;
        } else if (key > arr[mid2]) {
            left = mid2 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 6;

    // Ternary Search
    int resultTernary = ternarySearchIterative(arr, key);
    cout << "Ternary Search: Element found at index " << resultTernary << endl;
    return 0;
}