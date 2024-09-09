#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int mid = (low + high) / 2;
    int pi = arr[mid];
    swap(arr[mid], arr[high]);
    int i = low;

    for(int j = low; j < high; j++) {
        if(arr[j] < pi) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

void quick_sort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}


int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n, 0);

    cout << "Enter array elements --\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    cout << "sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << (i == n - 1 ? '\n' : ' ');  
    }

    return 0;
}