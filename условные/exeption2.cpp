#include <iostream>
#include <exception>
using namespace std;

class DivExeption : public runtime_error {
    public:
        DivExeption(const std::string& message) : std::runtime_error(message){}
};

int main() {
    try {
        int a = 0;
        if (a == 0) 
            throw DivExeption("Еблан это ноль!");
        int res = 4/a;
    }
    catch(const DivExeption& e) {
        cout << e.what() << endl;
    }
    return 0;
}