#include <iostream>
#include <thread>

using namespace std;

class a{
  public:
    a(const int&){cout << "default";};

    a(int&&){cout << "move";};

    int A = 2;
};

int returnInt(){
	return 2;
}

int main(){
	unsigned int c = std::thread::hardware_concurrency();
std::cout << " number of cores: " << c << endl;;
	return 0;
}
