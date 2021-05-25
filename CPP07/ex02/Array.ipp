template<typename T>
Array<T>::Array() : _arr(nullptr), _lenght(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _lenght(n) {
	this->_arr = new T[this->_lenght]();
}

template<typename T>
Array<T>::Array(Array<T> const &copy) {
	this->_lenght = copy._lenght;
	if (!copy._lenght)
		return ;
	this->_arr = new T[this->_lenght]();
	for (unsigned int i = 0; i < this->_lenght; i++) {
		_arr[i] = copy._arr[i];
	}
}

template<typename T>
const char* Array<T>::OutIndex::what() const throw() {
	return "khm... segfault";
}

template<typename T>
Array<T>::~Array() {
	if (this->_arr)
		delete [] this->_arr;
}

template<typename T>
T &Array<T>::operator[](unsigned int index) {
	if (index > this->_lenght)
		throw Array::OutIndex();
	return this->_arr[index];
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &copy) {
	if (this->_arr)
		delete this->_arr;
	this->_arr = nullptr;
	this->_lenght = copy._lenght;
	if (this->_lenght) {
		this->_arr = new T[_lenght]();
		for (unsigned int i = 0; i < copy._lenght; i++) {
			this->_arr[i] = copy._arr[i];
		}
	}
	return *this;
}

template<typename T>
unsigned int Array<T>::size() {
	return this->_lenght;
}