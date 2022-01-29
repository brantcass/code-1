/***************
Brant Cass
Date:1/27/2022
Program: This file is for the functions used in functions.cpp
****************/

#include "main.h"
using namespace std;

int main(int argc, char** argv) {
    cout << "My Command line analyzer..." << endl;

    cout << "The number of command line parameters are: "<< argc << endl;


    if(argc > 1){
        std::cout<< "The length of the name of the program is: "<< string_length(argv[1]) << std::endl;
    }
    
    
    for(int i = 1 ; i < argc ;i++){
        cout<<"The length of the parameter is "<< i << " is " << string_length(argv[i])<<endl;

    }


    return 0;
}
