#include <iostream>
#include <string>
#include <map>

class Test {
    public:
        void printing();
};

void Test::printing() {
    std::cout << "Hello World" << std::endl;
}

int main(int argc, char *argv[]) {
    Test* t1 = new Test();
    t1->printing(); 
}