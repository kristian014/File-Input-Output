
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

/*
* Partially completed program
* The program should copy a text file.
*
*/

static void Copy(char filenamein[], char filenameout[]);


int main(int argc, char **argv) {
	if (argc !=3) {
		cerr << "Usage: " << argv[0] << " <input filename> <output filename>" << endl;
		int keypress; 
		cin >> keypress;
		return -1;
	}

	Copy(argv[1], argv[2]);
	

	
	system("PAUSE");
}


static void Copy(char filenamein[], char filenameout[])
{
	ifstream fin(filenamein);
	ifstream fout(filenameout);
	
	
	if (fin.is_open()){

		cout << "file is open" << endl;
		// stores the character from your filepath
		char ReadEveryCharacter;
		char OutPutEverCharacter;
			while (fin.good()){
				
				// get every character and put it in
				fin.get(ReadEveryCharacter);
				cout << (ReadEveryCharacter);
				
	
	}
		
	}
	fin.close();
	};
