//Array implementation of MAX heap
public class MaxHeap {
    int[] heap;
    int size;
    int maxSize; // Size<=MaxSize

    MaxHeap(int maxHeap) {
        this.maxSize = maxHeap; // Correct assignment
        this.heap = new int[maxHeap];
        this.size = 0;
    }

    public int parent(int index) {
        return (index - 1) / 2;
    }

    public int left(int index) {
        return (index * 2) + 1;
    }

    public int right(int index) {
        return (index * 2) + 2;
    }

    // Insert function for heap
    public void swap(int fPos, int sPos) {
        int temp;
        temp = heap[fPos];
        heap[fPos] = heap[sPos];
        heap[sPos] = temp;
    }

    public void insert(int data) {
        int pos = size;
        heap[pos] = data;
        while (heap[pos] > heap[parent(pos)]) {
            swap(pos, parent(pos));
            pos = parent(pos);
        }
        ++size;
    }

    public static void main(String[] args) {
        MaxHeap heap = new MaxHeap(10);
        heap.insert(1);
        heap.insert(2);
        heap.insert(3);
        heap.insert(4);
        heap.insert(5);
    }
}