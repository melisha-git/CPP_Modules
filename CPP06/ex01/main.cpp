#include <iostream>
#include <string>

typedef struct s_data {
	std::string strOne;
	int         number;
	std::string strTwo;
} Data;

void	*serialize (void) {
	static const std::string pullWords = "catdogcrocodilebananaMessi666danil2283376";
	static const int pullWordsLength = pullWords.length();

	char *raw;

	raw = new char[16];
	raw[16] = '\0';
	for (int i = 0; i < 6; i++) {
		raw[i] = pullWords[std::rand() % pullWordsLength];
	}
	*reinterpret_cast<int *>(raw + 6) = std::rand(); //*(int *)(raw + 6) - То есть, начиная с 6 байта запишется int и займет собой 4 байта
	for (int i = 10; i < 16; i++) {
		raw[i] = pullWords[std::rand() % pullWordsLength];
	}
	return static_cast<void *>(raw);
}

Data	*deserialize (void * raw) {
	Data *data = new Data;

	data->strOne = std::string(static_cast<char*>(raw), 6);
	data->number = *reinterpret_cast<int*>(static_cast<char *>(raw) + 6); //Разыменовали с 6 байта следующие 4 байта
	data->strTwo = std::string(static_cast<char*>(raw) + 10, 6);
	return data;
}

int main() {
	std::srand(std::time(NULL)); // Что бы рандом работал
	void *raw;
	Data *data;

	for (int i = 0; i <= 13; i++) {
		std::cout << std::endl << std::endl << i << "\t: \n";
		raw = serialize();
		data = deserialize(raw);
		std::cout << "First str =\t" << data->strOne << std::endl;
		std::cout << "Number =\t" << data->number << std::endl;
		std::cout << "Second str =\t" << data->strTwo << std::endl;
		delete static_cast<char *>(raw);
		delete data;
	}
	return 0;
}