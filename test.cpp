#include <iostream>
#include <thread>

int returnInt(){
	return 2;
}

int main(){
	unsigned int c = std::thread::hardware_concurrency();
std::cout << " number of cores: " << c << endl;;
	return 0;
}
