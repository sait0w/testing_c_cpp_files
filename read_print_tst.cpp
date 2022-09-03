#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;
 
int main (){
 fstream obj;
 obj.open("/Users/pedrosaito/Documents/code/cpp_test/Vocabulary.txt", ios:: in);	//again opening the file but in reading mode

	while (!obj.eof())

	{
		string str;

		obj >> str;	//reading word by word from file and storing in str
        
        cout << str << "\n";
	}
    

	obj.close();	//closing the file after use


 return 0;
}