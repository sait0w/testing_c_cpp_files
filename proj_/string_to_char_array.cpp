#include <cstring>
#include <iostream>
#include <string>

using namespace std;

/*Método mais simples*/

int main() {
    char* char_arr;
    string str_obj("GeeksForGeeks");
    char_arr = &str_obj[0]; // É só isso?
    cout << char_arr;
    return 0;
}