#include <iostream>
#include <string>

using namespace std;

/*Create a program that can display a name 5 
times within 10 times. and can be repeated but 
this time 10 times within 3 times.*/

void after_choice_clear();

int main (){

    string uname;
    do {
        cout << endl;
        cout << "Input Your Name: ";
        getline (cin, uname);
        after_choice_clear();

        for (int i = 1; i <= 3; i++){
            cout << endl;
            cout << "--[" << i << "]--" << endl;
            cout << endl;
            for (int j = 1; j <= 10; j++){
                cout << endl;
                cout << "[" << j << "]" << endl;
                for (int k = 1; k <= 5; k++){
                cout << uname << endl;
                }
            }
        }
    } while (1);

    return 0;
}

void after_choice_clear (){
    system ("cls");
}