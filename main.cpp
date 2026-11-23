#include<iostream>
#include"clsMyQueue.h"
using namespace std;

int main()
{
	
	clsMyQueue <int> MyQueue;
	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "\nQueue:\n";
	MyQueue.Print();

	cout << "\n\nSize: " << MyQueue.size() << endl;
	cout << "Front: " << MyQueue.front() << endl;
	cout << "back: " << MyQueue.back() << endl;

	MyQueue.pop();
	cout << "\n\nQueue after pop():\n";
	MyQueue.Print();

	cout << "\n\nItem 2 = " << MyQueue.GetItem(2) << endl;

	MyQueue.Reverse();
	cout << "\n\nQueue after Reverse:\n";
	MyQueue.Print();

	MyQueue.UpdateItem(2, 600);
	cout << "\n\nQueue after Update item 2 to 600:\n";
	MyQueue.Print();

	MyQueue.InsertAfter(2, 800);
	cout << "\n\nQueue after Insert 800 after index 2:\n";
	MyQueue.Print();

	MyQueue.InsertAtFront(1000);
	cout << "\n\nQueue after Insert 100 at Front:\n";
	MyQueue.Print();

	system("pause > 0 ");
}