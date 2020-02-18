
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
	//The Input file is passed to the Infile filestream
	ifstream InFile(filenamein);
	// The output file is passed to the Outfile file stream
	ofstream OutFile(filenameout);
	
	// Check if the input file is open, if it's open
	if (InFile.is_open()){

		// print to the console file is open
		cout << "file is open" << endl;
		
		// create a character array to to read the characters
		char ReadEveryCharacter;
		
				// while the input file is good, keep check this process
			while (InFile.good()){
				
				// check if the output file is good as well 
				if (OutFile.good())
					{
					
						//use the fstream method to get every character in the 
							// input file and store them in ReadEveryChacter
						InFile.get(ReadEveryCharacter);

						// Put the character in the ReadEveryCharacter in the output file stream
						OutFile.put(ReadEveryCharacter);

						// print to the console the read characters
						cout << (ReadEveryCharacter);
					}
				
	}
			// close the output file
			OutFile.close();
	}
	// close the input file.. Good practice!!!!
	InFile.close();
	};
