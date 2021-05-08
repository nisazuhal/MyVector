
#include <iostream>
#include <vector>
using namespace std;

class MyVector
{
public:
	MyVector();
	MyVector(int val);
	MyVector(int numberOfItems, int defaultValue);
	++++++
	void addNewItem(int val);

	friend ostream& operator<<(ostream& outputStream, const MyVector& myVector);

	friend const MyVector operator+(const MyVector& myVector1, const MyVector& myVector2);
private:
	vector<int> v;
};