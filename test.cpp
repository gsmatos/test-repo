#include <iostream>
#include <thread>

using namespace std;


int returnInt(){
	return 2;
}

int main(){
	unsigned int c = std::thread::hardware_concurrency();
std::cout << " number of cores: " << c << endl;;
	return 0;
}
