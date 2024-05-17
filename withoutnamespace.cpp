#include<iostream>
namespace MyNamespace {
    int myVariable;
    void myFunction() {
        std::cout<< myVariable<<std::endl;
    }
}
int main() {
    MyNamespace::myVariable = 10;
    MyNamespace::myFunction();
    return 0;
}
//In C++, names such as classes, functions, and variables can be grouped into namespaces. The standard C++ library includes its functions, classes, and objects within the std (standard) namespace. For instance, the cout object, which is used for output, is defined within the std namespace. Without using the namespace, you would need to use std::cout instead of just cout.