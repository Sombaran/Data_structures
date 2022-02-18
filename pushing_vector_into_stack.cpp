/**
 * Putting all elements from vectors to stack
 */
#include <iostream>

#include <vector>
#include <stack>


 void printDataVector(std::vector <int>& vReceived) {
    for (int i=0;i<vReceived.size(); ++i) {
        std::cout << vReceived[i] << " " ;
    }
    std::cout << std::endl;
}

void printDataStack(std::stack  <int>& sObj ) {
        while(!sObj.empty()){
          sObj.pop();
          if(sObj.empty()) {
              std::cout << "The Stack is now Empty." << std::endl;
              break;
          }
          std::cout <<"Top Element is "<<sObj.top() << std::endl;
   }
     std::cout << std::endl;
}

inline void clearSTL (std::vector <int>& vReceived) {
        vReceived.clear();
}


int main()
{
    std::vector <int> vObj {};
    std::stack  <int> sObj {};
    for (int i=0;i<5; ++i) {
        vObj.push_back(i);
    }
    std::cout << std::endl;
    printDataVector(vObj);

    for (const auto& i :vObj ) {
        sObj.push(i);
    }
    std::cout << std::endl;

    printDataStack(sObj);
    clearSTL(vObj);

    return (0);
}
