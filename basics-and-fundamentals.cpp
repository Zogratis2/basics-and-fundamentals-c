#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> mergedArray;
    int size1, size2, element;

    
    cout << "Enter the number of elements for the first array (up to 10): ";
    cin >> size1;
    cout << "Enter the elements for the first array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> element;
        mergedArray.push_back(element);
    }

   
    cout << "Enter the number of elements for the second array (up to 10): ";
    cin >> size2;
    cout << "Enter the elements for the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> element;
        mergedArray.push_back(element);
    }

    
    sort(mergedArray.begin(), mergedArray.end(), greater<int>());

    
    cout << "The elements of the array in descending order: ";
    for (const int& num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
