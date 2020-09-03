#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(int, char**) {
    vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::cout << "Hello, world!\n";
    
    for(vector<int>::const_iterator itr=vec.begin(); itr< vec.end(); ++itr){
        std::cout << *itr << std::endl;
    }

}
