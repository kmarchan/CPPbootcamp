#include <iostream>

struct Data {
	std::string s1;
	std::string s2;
	int n;
};

std::string stringRandomer(char arr[7]) {
	char *ret = new char[8];
	for (size_t i = 0; i < 7; i++)
	{
		int e = rand() % 7;
		ret[i] = arr[e];
	}
	return ret;
}

void *serialize(void) {
	char s1Arr[] = {'a', 'b','c', 'd', 'e', 'f', 'g', 'h', 'i'};
	char s2Arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
	
	srand(time(0));
	std::string s1 = stringRandomer(s1Arr);
	std::string s2 = stringRandomer(s2Arr);
	Data *name = new Data;
	name->s1 = s1;
	name->s2 = s2;
	name->n = rand() % 100;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << name->n << std::endl;

	return reinterpret_cast<void*>(name);
}

Data *deserialize(void *raw) {return reinterpret_cast<Data*>(raw);}

int main()
{
    void * raw = serialize();
    std::cout << "memory address: " << raw << std::endl;
    
    Data *ret =deserialize(raw);

    std::cout << std::endl << "_New data_" << std::endl
    << ret->s1 << std::endl
    << ret->s2 << std::endl
    << ret->n << std::endl
    << "________" << std::endl;
    return 0;
}
