# Brittany Saunders(cssc1055), Samuel Akinmulero(cssc1056)
# June 20, 2018
# CS570, Summer 2018
# Guy Leonard
# Assignment 2
# Name of File: README.txt
# All project files located in cssc1056
# Project a2.zip uploaded to Samuel Akinmulero's account


-File Manifest: README.txt, Makefile, fileeditor.cpp, filem

-Compile Instructions:
At the home directory, enter the a2 directory 'cd a2'
Enter 'make' to create Makefile
Enter 'filem' to run the program
Enter 'make clean' to remove object/output files

-Operating Instructions: (include any/all command line options/arguments, require inputs, etc)
When the program starts, the user is presented with a menu with options. The numbers 1-8
are used for creating files and directories, reading/editing files, printing file statuses, and
printing the contents of directories. The number 9 is used to return to the main menu. This file
editing program is extremely user-friendly, and prompts the user for every action that is taken.

-List/description of novel/significant design decisions
Our program was primarily built using switch statements. We used each case as an option for the user. This
allowed us and the user to perform all of the operations in the program without having to exit the entire
program until the user enters the command to quit.

-List/description of any extra features/algorithms/functionality you included which were not required
We implemented all of the require features/algorithms/functionality.

-List/description of all known deficiencies or bugs
Multiple gap lines are created in output whenever pthread_create is called in cases where they exist.

-Lessons Learned
By creating our own multi-processing editor, we learned what happens behind the scenes when creating
files/directories, opening/reading/editing/closing files, and looking at file statuses on our personal
computers. We also learned more useful C++ functions such as vector and sort. Putting strings into vectors
allowed us to easily sort the file contents in alphabetical and reverse alphabetical order.

-Notes:
When sorting the file contents, the uppercase and lowercase words are sorted separately.
SORTED.txt contains the alphabetic order of the specified file and REVERSE_SORTED.txt contains the
reversed alphabetic order of that specified file.

******Additionally, identify in your README file who worked on which lines of code in this project*****

Brittany worked on:
void *child_copy()
void *child_sorted()
void *child_revSort()
void modes()
bool exists_check()

Samuel worked on:
int main()
void main_menu()
void modes()
void printdircontent()
size_t getFilesize()