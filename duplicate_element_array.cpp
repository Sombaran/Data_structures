/**
1) This is done using std::set STL
2) [1,2,3,4] is input array then output should be [24. 12, 8, 6]
*/


#include <bits/stdc++.h>

void displayArray(std::array<int,size_t{6}>& receivedArray) {
    for(const auto& i : receivedArray) {
        std::cout << i <<  " ";
    }
    std::cout << std::endl;
}
void displaySet(std::set<int>& receivedSet) {
    for (const auto& i: receivedSet) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int doOperation(std::array<int,size_t{6}>& receivedArray) {
    static int tempCaptureMultiplier {1};
    for (int i=0;i<receivedArray.size();++i) {
        tempCaptureMultiplier *= receivedArray[i] ;
    }
    std::cout << tempCaptureMultiplier << std::endl;
    //std::cout << std::endl;
    return tempCaptureMultiplier;
}

void newArray(std::array<int,size_t{6}>& receivedArray, int& received) {
    for (const auto& i: receivedArray) {
        std::cout << (received/i) << " ";
    }
    std::cout << std::endl;
}

int main(void) {
    std::array <int, size_t{6} > aObj {1,2,3,1,5,6};
    std::set <int > sObj {};
    
    for (const auto& i: aObj) {
        sObj.insert(i);
    }
    
    displayArray(aObj);
    displaySet(sObj);

    int outputFromOperation = doOperation(aObj);
    newArray(aObj, outputFromOperation);
    return (0);
}
