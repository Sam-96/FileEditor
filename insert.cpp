#include <fcntl.h>
#include <dirent.h>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iterator>
#include <limits.h>

//Print file status (print out to stdout)
//He wants things like if the file is open, closed, in write mode, in read
//mode, if it exists, if it doesn't exist, time last modified, etc.
//Based on PRIMARY REAL file not bak, shadow file
//Print to stdout means print to console
//Look at stat man page


//Print directory listing (contents of dir file) (print out to stdout)
//He wants us to print all the files in the directory
//Print to stdout means print to console

using namespace std;

static ofstream rfile;

int main() {

    /*
     * string filename;
            cout << "Enter file name to append to: " << endl;
            cin >> filename;
            rfile.open(filename.c_str(), fstream::app);
            cout << "What would you like to write to the file?: " << endl;
            string write;
            cin.ignore();
            getline(cin, write, '\n');
            rfile << write << "\n"; //What we put into file
            long pos = rfile.tellp();
            rfile.close();
            -----------------------------------------------------------------------

            string filename;
    cout << "Enter file name to append to: " << endl;
    cin >> filename;
    rfile.open(filename.c_str(), fstream::app);
    cout << "What would you like to write to the file?: " << endl;
    string write;
    cin.ignore();
    rfile << write << "\n"; //What we put into file
    istream_iterator<char> start(is), end;
    vector<char> letters(start,end);
    cout << "Read " << letters.size() << " letters" << endl;

    cout << "letters read in: \n";
    copy(letters.begin(), letters.end(), ostream_iterator<char>(cout, " "));
    cout << endl;
     */

    /*   vector<string>::iterator pos;
       vector<string> fileVec;
       string filename;
       string f;
       cout << "Enter file name to append to: " << endl;
       cin >> filename;
       while (rfile >> f){
           fileVec.push_back(f);
       }
       rfile.close();
       rfile.open(filename.c_str(), fstream::app);
       cout << "What would you like to write to the file?: " << endl;
       string write;
       cin.ignore();
       getline(cin, write, '\n');
       rfile << write << "\n"; //What we put into file
       copy(fileVec.begin(), fileVec.end(), ostream_iterator<string>(cout, " "));
       pos = fileVec.begin();
       pos = fileVec.insert(pos+2, 13, "Yoooo");
       cout << endl;
       rfile.close();
       C:\Users\Samuel (Yomi)\CLionProjects\CS570Assignment2

       }
       */

    fstream is("PLZ.txt");
    istream_iterator<string> start(is), end;
    vector<string> letters(start,end);
    cout << "Read " << letters.size() << " letters" << endl;

    cout << "letters read in: \n";
    sort(letters.rbegin(), letters.rend());
    copy(letters.begin(), letters.end(), ostream_iterator<string>(cout, " "));
    cout << endl;


}
