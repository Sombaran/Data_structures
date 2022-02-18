/**
 * Putting all elements from vectors to set
 */
#include <iostream>

#include <vector>
#include <set>


 void printDataVector(std::vector <int>& vReceived) {
    for (int i=0;i<vReceived.size(); ++i) {
        std::cout << vReceived[i] << " " ;
    }
    std::cout << std::endl;
}

void printDataSet(std::set  <int>& sObj ) {

    for (const auto& i: sObj) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

inline void clearSTL (std::vector <int>& vReceived, std::set  <int>& sObj) {
        vReceived.clear();
        sObj.clear();
}


int main()
{
    std::vector <int> vObj {};
    std::set  <int> sObj {};
    for (int i=0;i<5; ++i) {
        vObj.push_back(i);
    }
    std::cout << std::endl;
    printDataVector(vObj);

    for (const auto& i :vObj ) {
        sObj.insert(i);
    }
    std::cout << std::endl;

    printDataSet(sObj);
    clearSTL(vObj, sObj);

    return (0);
}
