/* Matthew McGilvery
 3 - 4 - 15
 #6 from Savitch (Practice Problems); In class completion*/

//System Libraries
#include < iostream 
//a) Introduced extra space between "<" and iostream. 
//Result: Cannot find system library, iostream.
//b) Omitted one of the "<" in the include directive
//Result: Cannot find include file.
using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable

//Function Prototypes

//Execution begins here!
 man  
 //c) Omitted the int from the main function introduction.
 //Result: Unresolved identifier - main
 //d) Misspelled main
 //Result: C++ requires an identifier
 //e) Omitted one and both of the parentheses 
 //Result: Unexpected token "(" and "Unable to resolve identifiers"
 {
    //Declare Variables
    int lOfFnce, width, height;
    //Request data from user
    cut << "Press return after entering a number." << endl;
 //e1) Misspelled cout
 //Result: Unexpected token "cut"
    cout << "Enter the width of the fence: " << endl;
    cn >> width;
 //e2) Misspelled "cn"
 //Result: Unexpected token "cut"
    cout << "Enter the height of the fence: " << endl;
    cin > height;
 //e3) Omitted an ">" from ">>"
 //Result: Unexpected token ">"
    //Make Calculation
    lOfFnce = width * height;
    //Output data
    cout << "If your fence's width is ";
    cout << width;
    cout << "," << endl;
//e4) Misspelled cout
//Result: Unexpected token "cut"
    cout << "and your fence's height is ";
    cout << height << ","<< endl;
    cout << "then your fence's total length is ";
    cout << lOfFnce << "." << endl;
    cout << "Have a good day!" << endl;
    //Exit Stage left
    return 0;
//e5) Omiited the closing brace "}"
//Result: Unexpected token "return 0"