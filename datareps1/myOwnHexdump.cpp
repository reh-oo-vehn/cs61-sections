#include "hexdump.hh"

#include <iostream>
#include <iomanip> // For formatting output
    
using namespace std; 
/*
void hexdump(const void* obj, size_t size) { 
    // Cast to access the contents of the object as a sequence of bytes. 
    const unsigned char* ptr = reinterpret_cast<const unsigned char*>(obj);
    cout << "Address     Hexadecimal content\n";
    cout << "-------------------------------\n";

    for (size_t i = 0; i < size; i++) {
        cout << setw(10) << hex << reinterpret_cast<uintptr_t>(&ptr[i]) << "\n";
        cout << setw(2) << setfill('0') << hex << static_cast<int>(ptr[i]) << "\n"; 
    }

    cout << endl; 
}

struct MyObject {
    int x; 
};
*/
int main() {
    // MyObject instance = {42}; 

    /*
    cout << "Hexdump of instance of MyObject\n"; 

    // hexdump(&instance, sizeof(instance)); 

    // Suppose you would like to print only the address to the first byte of instance.

    cout << hex << reinterpret_cast<uintptr_t>(&instance) << "\n"; 

    // Suppose you would like to print the contents of instance. 

    const unsigned char* ptr = reinterpret_cast<const unsigned char*>(&instance); 

    for (size_t i = 0; i < sizeof(instance); i++) { 
        cout << setfill('0') << hex << static_cast<int>(ptr[i]) << " "; 
    }

    cout << endl; 

    */


   // You can also choose to use the hexdump function given in cs61. 

    int instance = 0; 
    hexdump_object(instance); 

    return 0; 
}