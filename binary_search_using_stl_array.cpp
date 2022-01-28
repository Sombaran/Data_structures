/**
 * @author: Som Gupta
 */


#include <iostream>
#include <array>
#include <algorithm>




int binarySearch(std::array<int, 5>& arrayReceived, uint key);

int binarySearch(std::array<int, 5>& arrayReceived, uint key) {

    //uint returnValue   = -1;
    
    std::cout << "INSIDE BINARY SEARCH " << std::endl;
    for (int i=0;i<arrayReceived.size();++i)
        std::cout << arrayReceived[i] << " ";
    
    std::cout << std::endl;
    uint size          = arrayReceived.size();
    uint startElement  = 0u;
    uint endElement    = (size - 1u);
    uint midELement    = ((startElement + endElement) /2u);
    std::cout << startElement << " " << endElement << " " << midELement << std::endl;
    
    while(startElement <= endElement) {
        if (key == arrayReceived[midELement])
            return midELement;
        
        if(key > arrayReceived[midELement])
            startElement = midELement + 1u;
            
        else
            endElement = midELement - 1u;
        
        midELement = ((startElement + endElement) /2u);
    }
    return -1;
}



int main() {
    std::array <int, 5> arrayObj{33,44,11,22,77};
    
    int size = arrayObj.size();
    std::cout << "UN-SORTED ARRAY" << std::endl;

    for (int i=0;i<size;++i)
        std::cout << arrayObj[i] << " ";
    
    std::cout << std::endl;

    
    std::sort(arrayObj.begin(), arrayObj.end());
    
    std::cout << "SORTED ARRAY" << std::endl;
     for (int i=0;i<size;++i)
        std::cout << arrayObj[i] << " ";
    std::cout << std::endl;
    
    int receivedResult = binarySearch(arrayObj, 323);
    std::cout << "INDEX is " << receivedResult << std::endl;
    return (0);
}
