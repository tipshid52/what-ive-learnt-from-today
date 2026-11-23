#include <iostream>
using namespace std ;

int main()
{
    int num ;        int nums[50] ;         float decimal ;
    bool isTrue ;    unsigned int max ;     char letter ;
    double pi ;      short int number ;     char letters[50] ;

    cout << "int size: " << sizeof( num ) ;
    cout << "\t50 int size: " << sizeof( nums ) << endl ;
    cout << "short int size: " << sizeof( number ) << endl ;
    cout << "unsigned int size: " << sizeof( max ) << endl ;

    cout << "double size: " << sizeof( pi ) << endl ;
    cout << "float size: " << sizeof( decimal ) << endl ;
    cout << "char size: " << sizeof( letter ) << endl ;
    cout << "\t50 char size: " << sizeof( letters ) << endl ;
    cout << "bool size: " << sizeof( isTrue ) << endl ;

    return 0 ;
}

//compilation command is g++ main.cpp -o sizeof
//run command is ./sizeof
//it may fail cause im in linux and u might not be
