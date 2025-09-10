#include <iostream>
using namespace std;
int find(int arr[], int n, int key, int indices[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices[count] = i;
            count++;
        }
    }
    return count;  
}
int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter key: ";
    cin >> key;
    int indices[100];
    int count = find(arr, n, key, indices);
    if (count == 0) {
        cout << "Key not found" << endl;
    } else {
        cout << "Key found at indices: ";
        for (int i = 0; i < count; i++) {
            cout << indices[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
