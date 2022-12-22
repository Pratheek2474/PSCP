#include <iostream>
using namespace std;

int main() {

char a;

cout << "Enter any character: ";

cin >> a;

int val = int(a);

cout << "ASCII value is " << val << endl;

if (val >= 65 && val >= 90){

cout << "Uppercase" << endl;

}
else if (val >= 97 && val <= 122) {

cout << "Lowercase" << endl;

}
else if (val >= 48 && val <= 57) {

cout << "Digit" << endl;

}
return 0;


}
