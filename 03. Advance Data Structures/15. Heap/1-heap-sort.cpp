#include<bits/stdc++.h>
using namespace std;


class MinHeap {
    vector<int> heap;

    // helper functions

    int getParent(int i) {
        return (i - 1) / 2;
    }

    int getLeft(int i) {
        return 2 * i + 1;
    }

    int getRight(int i) {
        return 2 * i + 2;
    }

    void heapifyUp(int i) {
        while (i != 0 and heap[getParent(i)] > heap[i]) {
            swap(heap[getParent(i)], heap[i]);
            i = getParent(i);
        }
    }

    void heapifyDown(int i) {
        int left = getLeft(i);
        int right = getRight(i);

        int smallest = i;

        int element = min(heap[left], heap[right]);

        if (left < heap.size() and heap[left] < heap[smallest]) {
            smallest = left;
        }

        if (right < heap.size() and heap[right] < heap[smallest]) {
            smallest = right;
        }

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:

    void insert(int data) {
        heap.push_back(data);
        int index = heap.size() - 1;
        heapifyUp(index);
    }

    int extractMin() {
        if (heap.empty()) {
            cout << "Heap is empty!" << endl;
            return -1;
        }

        int minValue = heap[0];
        heap[0] = heap.back();
        heap.pop_back();

        heapifyDown(0);

        return minValue;
    }

    void printMinHeap() {
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
    }

    vector<int> heapSort() {
        vector<int> result;
        int size = heap.size();
        for (int i = 0; i < size; i++) {
            result.push_back(extractMin());
        }

        return result;
    }
};

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("E:/Codes/input.txt", "r", stdin);
    freopen("E:/Codes/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    MinHeap mh;

    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mh.insert(x);
    }

    vector<int> result = mh.heapSort();

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}