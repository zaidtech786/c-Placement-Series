#include <iostream>
#include <unordered_set>
#include <vector>

std::vector<int> findIntersection(int arr1[], int n1, int arr2[], int n2) {
    std::unordered_set<int> set1;
    std::vector<int> intersection;

    // Add elements of the first array to the hash set
    for (int i = 0; i < n1; i++) {
        set1.insert(arr1[i]);
    }

    // Check which elements of the second array are in the hash set
    for (int i = 0; i < n2; i++) {
        if (set1.find(arr2[i]) != set1.end()) {
            intersection.push_back(arr2[i]);
            set1.erase(arr2[i]);  // Optional: remove the element to handle duplicates
        }
    }

    return intersection;
}

int main() {
    int arr1[] = {4,9,5};
    int arr2[] = {9,4,9,8,4};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    std::vector<int> result = findIntersection(arr1, n1, arr2, n2);

    std::cout << "Intersection of the two arrays: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
