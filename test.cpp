
#include <iostream>
// #include <format>
#include <vector>

using std::cout;
using std::endl;

int main(){
    cout << "Eureka!" << endl;
    // std::format("{:}",5);
    std::vector<int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);
    }
    for(auto i:v){
        cout << i << ", " << endl;
    }
    return 0;
}