#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

void basics1()
{
	queue<int>q1;

	q1.push(127);
	q1.push(3);
	q1.push(45);

	q1.pop();

	cout << q1.front() << endl;
	cout << q1.back() << endl;
	cout << q1.size() << endl;
	cout << q1.empty() << endl;;

	queue<int>temp1 = q1;
	while (!q1.empty() && !temp1.empty())
	{
		cout << q1.front() << endl;
		temp1.pop();

	}
}

//teoria de tamplates
template<class T>

class queuee 
{
	struct Node
	{
		int data;
		Node* next;
		
	};

	Node* first;
	Node* last;
	//Size size;  
	size_t size;

public:
	//constructor
	queuee()
	{
		first = nullptr;
		last = nullptr;
		size = 0;
	}

	void push()
	{
		Node* node = new Node();
		//Node node;

		if (first == nullptr || size == 0 || last == nullptr)
		{
			first = node;
			last = node;
		}
		else 
		{
			last->next = node;
			last = last->next;
			last = node;
		}
	}

	void pop()
	{
		if (first == nullptr || size == 0 || last == nullptr)
		{
			return;
		}//con esto sabemos que la cola no esta vacia

		Node* nodeToRemove = first;
		first = first->next;
		delete nodeToRemove;
		--size; 
	}

	~queuee()
	{

	}
};

//void main()
//{
//	basics1();
//}