//代码四
#include "iostream"
#include "string"
using namespace std;
 
void Test() {
	string s1("abcde12345");
 
	s1.reserve(20);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//31
 
	s1.reserve(30);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//31
 
	s1.reserve(40);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//47
	
	s1.reserve(50);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//70
 
	s1.reserve(60);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//70
 
	s1.reserve(50);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//70
 
	s1.reserve(40);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//70
 
	s1.reserve(30);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//70
 
	s1.reserve(20);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//70
 
	s1.reserve(15);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//15
 
	s1.reserve(12);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//15
 
	s1.reserve(9);
	cout << s1.size() << endl;//10
	cout << s1.capacity() << endl;//15
}
 
int main() {
	Test();
}