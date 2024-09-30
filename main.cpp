#include <iostream>
#include <fstream>
#include <string>

char* table_chars = 0;
int table_length = 0;
int* table_ascii_code = 0;

using namespace std;

void odczytaj(){
    ifstream readFile("szyfr.txt");

    string linia;
    getline(readFile, linia);
    table_length = linia.length();
    table_chars = new char[table_length];
    for(int i = 0; i<table_length; ++i){
        table_chars[i] = linia[i];
    }
    readFile.close();

    //cout<<table<<endl;
}

void znakiASCII(){
    table_ascii_code = new int[table_length];
    for(int i = 0; i<table_length; ++i){
        table_ascii_code[i] = (int)table_chars[i];
        cout<<"Letter: "<<table_chars[i]<<"\n"<<"Index: "<<i<<"\n"<<"ASCII Value: "<<table_ascii_code[i]<<"\n"<<endl;
    }
}

void znakiBin(){

}

void odszyfruj(){

}

void zaszyfruj(){

}

int main()
{
    odczytaj();
    znakiASCII();
    return 0;
}
