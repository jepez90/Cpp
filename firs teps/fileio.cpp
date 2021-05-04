#include <iostream>

//******* 1 - Include the <fstream> library  
#include <fstream>
#include <string>

using namespace std;

int main () {
    string line;
    /******* 2 - Create a stream (input, output, both) app=append in this case
    *  - ofstream myfile; (for writing to a file)
    *  - ifstream myfile; (for reading a file)
    *  - fstream myfile; (for reading and writing a file)
    */
    /*  - Open the file  myfile.open(“filename”); */
    ofstream myOutputFile("file.txt", ios::app);
    /* in this case the file is open when the stream is created */
    if (myOutputFile.is_open()){
        /*- Write or read the file*/
        myOutputFile<<"this is a new line for the file\n";
        myOutputFile<<"this is another new line for the file\n";
        /*- Close the file myfile.close();*/
        myOutputFile.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    ifstream myInputFile ("file.txt");

    if (myInputFile.is_open())
    {
        /*- Write or read the file*/
        while ( getline(myInputFile, line))
        {
            /*getline copy the line of the file to line */
            cout << line << '\n';
        }
        /*- Close the file myfile.close();*/
        myInputFile.close();
    }
    else cout << "Unable to open file for reading";

    return 0;
}

