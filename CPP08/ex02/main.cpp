#include "mutantstack.hpp"
#include <iostream>

void myTest() {
	MutantStack<int> mstack;
	mstack.push(12);
	mstack.push(45);
	MutantStack<int>::iterator it = mstack.begin();
	while (it < mstack.end()) {
		std::cout << *it << std::endl;
		it++;
	}
}

int main() {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	myTest();
	return 0;
}