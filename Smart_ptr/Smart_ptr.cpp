/*#include <iostream>
using namespace std;

class SmartPtr {
	int* ptr; // Actual pointer
public:
	SmartPtr(int* p = NULL) { ptr = p; }

	~SmartPtr() { delete (ptr); }

	int& operator*() { return *ptr; }
};

int main()
{
	SmartPtr ptr1(new int());
	*ptr1= 20;
	cout << *ptr1;
	return 0;
}*/
#include <memory>
#include <iostream>

int main() {
	
	std::unique_ptr<int> ptr = std::make_unique<int>(42);
	
	std::cout << "The value of the object is: " << *ptr << std::endl;

	
	return 0;
}
