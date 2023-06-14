#include<iostream>
#include"queue.h"

int main()
{
	queue<int>myQueue;

	for (size_t i = 0; i < 10; ++i) {
		myQueue.Push(i);
		std::cout << i << " was pushed in queue\n";
	}

	queue<int>myQueue2(myQueue);
	while (!myQueue2.IsEmpty()) {
		std::cout<<"[" << myQueue2.Top() << "]";
		myQueue2.Pop();
	}
}