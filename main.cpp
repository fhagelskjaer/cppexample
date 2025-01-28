#include <string>
#include <vector> 
#include <iostream>

int main(int argc, char**argv)
{
    std::cout << "executable= " << argv[0] << std::endl;
    
    int inputInteger = atoi( argv[1] );

    std::cout << "Integer " << inputInteger << std::endl;
    
    return 0;
}
