#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
private:
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack& mutantStack) : std::stack<T>(mutantStack) {}
	virtual ~MutantStack() {}
	MutantStack& operator=(MutantStack& mutantStack) {
		this->c = mutantStack.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
};

#endif