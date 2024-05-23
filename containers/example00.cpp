#include <iostream>  // use of std::cout, std::cin

class Queue {  // Class for a queue of integers
 public:
  Queue(int size = 100) : maxSize(size), tail(0), head(0), filled(0) { items = new int[size]; }
  ~Queue() { delete[] items; items = nullptr; };
  void put(int data);
  int get();
  bool isFull() const { return filled == maxSize; }
  bool isEmpty() const { return filled == 0; }
  void clear() { filled = 0; head = 0; tail = 0; }
 private:
  int *items;    // array of integers
  int maxSize;   // size of items
  int tail;      // position in array to put
  int head;      // position in array to get from
  int filled;    // number of elements in queue
};

void Queue::put(int data) {
  if (!isFull()) {
    items[tail] = data;
    tail = (tail+1) % maxSize;
    filled++;
  } else {
    throw std::runtime_error("queue: full on put");
  }
}

int Queue::get() {
  int retval;
  if (!isEmpty()) {
    retval = items[head];
    head = (head+1) % maxSize;
    filled--;
  } else {
    throw std::runtime_error("queue: empty on get");
  }
  return retval;
}

int main() {
  Queue q(127);
  for (auto i = 0; i < 128; i++) {
    q.put(i);
  }
	return 0;
}
