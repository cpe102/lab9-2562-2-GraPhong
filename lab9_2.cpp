#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream dest("C:\\Users\\IamPh\\newlab3\\lab9-2562-2-GraPhong\\cheerbook_copy.txt");
	ifstream source;
	
	source.open("C:\\Users\\IamPh\\newlab3\\lab9-2562-2-GraPhong\\cheerbook.txt");
    string textline;
    

    dest << "-------------------- SOTUS ---------------------"<<"\n";
    
    while (getline(source,textline)){
        dest << textline << "\n";
    }

    dest << "-------------------- SOTUS ---------------------";



    dest.close();
    source.close();

    return 0;

}