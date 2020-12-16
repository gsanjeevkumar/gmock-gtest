#include <iostream>
#include "SearchVectorConfig.h"

using namespace std;

void usage()
{
    cout<< " Version " << SearchVector_VERSION_MAJOR << "." << SearchVector_VERSION_MINOR <<endl;
}

int main(int argc, char *argv[])
{

    usage();

    if(argc < 2)
    {
        
        cout<< "Usage: " << argv[0] << " <INI_File>" <<endl;
        
    }
}