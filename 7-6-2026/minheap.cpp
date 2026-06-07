
#include <iostream>
using namespace std;

void minHeapify(int A[], int n, int i) {
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && A[l] < A[smallest]) {
        smallest = l;
    }

    if (r < n && A[r] < A[smallest]) {
        smallest = r;
    }

    if (smallest != i) {
        swap(A[i], A[smallest]);
        minHeapify(A, n, smallest);
    }
}

void buildMinHeap(int A[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(A, n, i);
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

    buildMinHeap(A, n);

    cout << "Min Heap output: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";

    delete[] A;
    return 0;
}
