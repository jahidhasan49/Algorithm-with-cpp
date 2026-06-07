
#include <iostream>
using namespace std;

void maxHeapify(int A[], int n, int i) {
    int large = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && A[l] > A[large]) {
        large = l;
    }

    if (r < n && A[r] > A[large]) {
        large = r;
    }

    if (large != i) {
        swap(A[i], A[large]);
        maxHeapify(A, n, large);
    }
}

void buildMaxHeap(int A[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(A, n, i);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* A = new int[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    buildMaxHeap(A, n);

    cout << "Max Heap output: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";

    delete[] A;
    return 0;
}
