#include "Convertor.class.hpp"

Convertor::Convertor(std::string const &line) : _line(line), _charNumber(0), _intNumber(0), _floatNumber(0.0), _doubleNumber(0.0), _coef(1), isDot(false) {
	this->_type = IMPOSSIBLE_TYPE;
	if (_line.length() == 1 && (line[0] < '0' || line[0] > '9')) {
		this->_type = CHAR_TYPE;
	}
	else {
		int i = 0;
		if (line[i] == '+' || line[i] == '-') {
			if (line[i] == '-')
				_coef = -1;
			i++;
		}
		for (; line[i]; i++) {
			if (!(line[i] >= '0' && line[i] <= '9'))
				break ;
		}
		if (!line[i])
			this->_type = INT_TYPE;
		else if (line[i] == '.') {
			this->_type = DOUBLE_TYPE;
			++i;
			for (; line[i]; i++) {
				if (!(line[i] >= '0' && line[i] <= '9')) {
					if (line[i] == 'f' && line[i + 1] == '\0')
						this->_type = FLOAT_TYPE;
					else
						this->_type = IMPOSSIBLE_TYPE;
				}
			}
		}
		else if (line[i] == 'f' && line[i + 1] == '\0')
			this->_type = FLOAT_TYPE;
	}
	if (this->_type != IMPOSSIBLE_TYPE)
		this->convert();
}

void Convertor::charCast() {
	this->_charNumber = this->_line[0];
	this->_intNumber = static_cast<int>(this->_charNumber);
	this->_floatNumber = static_cast<float>(this->_intNumber);
	this->_doubleNumber = static_cast<double>(this->_floatNumber);
}

void Convertor::intCast() {
	bool isInt = true;
	int i = 0;
	if (_line[i] == '-' || _line[i] == '+') {
		i++;
	}
	for (; _line[i] && isInt; i++)	{
		_intNumber = _intNumber * 10 + (_line[i] - '0');
		isInt = this->isIntLimits();
	}
	_intNumber *= _coef;
	this->_charNumber = static_cast<char>(this->_intNumber);
	this->_floatNumber = static_cast<float>(this->_intNumber);
	this->_doubleNumber = static_cast<double>(this->_floatNumber);
}

void Convertor::checkDot() {
	int resAfterDot = 0;

	for (int i = 0; _line[i]; i++) {
		if ((_line[i] == '.') && _line[i + 1]) {
			for (int j = i + 1; _line[j]; j++) {
				if (_line[j] < '0' || _line[j] > '9')
					break ;
				resAfterDot = resAfterDot * 10 + (_line[j] - '0');
			}
			break ;
		}
	}
	if (resAfterDot != 0)
		isDot = true;
}

void Convertor::doubleCast() {
	checkDot();
	this->_doubleNumber = std::stod(_line);
	this->_floatNumber = static_cast<float>(_doubleNumber);
	this->_intNumber = static_cast<long int>(_doubleNumber);
	this->_charNumber = static_cast<char>(_intNumber);
}

void Convertor::convert() {
	switch (this->_type) {
		case CHAR_TYPE :
			this->charCast();
			break ;
		case INT_TYPE :
			this->intCast();
			break ;
		case DOUBLE_TYPE :
			this->doubleCast();
			break ;
		case FLOAT_TYPE :
			this->doubleCast();
		default:
			break ;
	}
}

bool Convertor::isIntLimits() const {
	if (INT_MAX < _intNumber || INT_MIN > _intNumber)
		return false;
	return true;
}

bool Convertor::isCharLimits() const {
	if (CHAR_MAX < _intNumber || CHAR_MIN > _intNumber)
		return false;
	return true;
}

bool Convertor::isNonDisplay() const {
	if (_charNumber < 32 || _charNumber > 126)
		return true;
	return false;
}

bool Convertor::isImpossible() const {
	return (this->_type == IMPOSSIBLE_TYPE ? true : false);
}

char Convertor::getCharNumber() const {
	return this->_charNumber;
}

float Convertor::getFloatNumber() const {
	return this->_floatNumber;
}

double Convertor::getDoubleNumber() const {
	return this->_doubleNumber;
}

int Convertor::getIntNumber() const {
	return this->_intNumber;
}

bool Convertor::getIsDot() const {
	return isDot;
}

int Convertor::getCoef() const {
	return _coef;
}

std::ostream &operator<<(std::ostream &myOst, Convertor const &copy) {
	myOst << "char: ";
	if (copy.isImpossible() || !(copy.isCharLimits()))
		myOst << "impossible";
	else if (copy.isNonDisplay())
		myOst << "Non displayable";
	else
		myOst << "'" << copy.getCharNumber() << "'";
	myOst << std::endl;
	myOst << "int: ";
	if (copy.isImpossible() || !(copy.isIntLimits()))
		myOst << "impossible";
	else
		myOst << copy.getIntNumber();
	myOst << std::endl;
	myOst << "float: ";
	if (copy.isImpossible())
		myOst << "nan";
	else {
		if (std::isinf(copy.getFloatNumber()) && copy.getCoef() == 1)
			myOst << "+";
		myOst << copy.getFloatNumber();
		if (!std::isinf(copy.getFloatNumber()))
		{
			if (!copy.getIsDot())
				myOst << ".0";
		}
	}
	myOst << "f";
	myOst << std::endl;
	myOst << "double: ";
	if (copy.isImpossible())
		myOst << "nan";
	else {
		if (std::isinf(copy.getDoubleNumber()) && copy.getCoef() == 1)
			myOst << "+";
		myOst << copy.getDoubleNumber();
		if (!copy.getIsDot())
			myOst << ".0";
	}
	myOst << std::endl;
	return myOst;
}
