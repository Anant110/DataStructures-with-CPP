#include <bits/stdc++.h>
using namespace std;

class heap
{
    int arr[100];
    int size;

public:
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        int ind = size;
        arr[ind] = val;
        size = size + 1;

        while (ind > 0)
        {
            int parent = ind / 2;
            if (arr[parent] < arr[ind])
            {
                swap(arr[parent], arr[ind]);
                ind = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletefromHeap()
    {
        if (size < 0)
        {
            cout << "Nothing to be delete";
        }

        arr[0] = arr[size - 1];
        size--;

        int i = 0;
        while (i < size)
        {
            int leftChild = 2 * i + 1;
            int rightChild = 2 * i + 2;

            if (leftChild < size && arr[i] < arr[leftChild])
            {
                swap(arr[leftChild], arr[i]);
                i = leftChild;
            }

            else if (rightChild < size && arr[i] < arr[rightChild])
            {
                swap(arr[rightChild], arr[i]);
                i = rightChild;
            }

            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    int size = n;

    while (size > 0)
    {
        swap(arr[0], arr[size - 1]);
        size--;

        heapify(arr, size, 0);
    }
}

int main()
{
    /*
    heap h;
    h.insert(45);
    h.insert(23);
    h.insert(89);
    h.insert(78);
    h.insert(67);

    h.print();

    h.deletefromHeap();
    h.print();
    */

    int nums[] = {45, 78, 90, 12, 56, 70};
    int n = sizeof(nums) / sizeof(nums[0]);


    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapify(nums, n, i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout<<endl;
    cout << "Heap Sort:" << endl;
    heapsort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }


    cout<<"Priority queue is here"<<endl;

    // maxHeap
    priority_queue<int> mapHeap;

    // minHeap
    priority_queue<int,vector<int>,greater<int>> minHeap;
}
