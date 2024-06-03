#include <iostream>
#include <string>

using namespace std;

/*Create a program that can display a name 5 
times within 10 times. and can be repeated but 
this time 10 times within 3 times.*/

void after_choice_clear();
void enter_to_continue();

int main (){

    string uname, unameagain, unameagainagain;
    do {
        cout << endl;
        cout << "Input Your Name: ";
        getline (cin, uname);
        after_choice_clear();

        cout << "Displaying names 5 times within 10 times (blocks)";
        for (int i = 1; i <= 10; i++){
            cout << endl << "Block [" << i << "]" << endl;
            for (int j = 1; j <= 5; j++){
                cout << "[" << j << "] " << uname << endl;
            }
        }

        cout << endl;
        cout << "Input Your Name Again: ";
        getline (cin, unameagain);
        after_choice_clear();

        cout << "Displaying names 10 times within 3 times (blocks)";
        for (int i = 1; i <= 3; i++){
            cout << endl << "Block [" << i << "]" << endl;
            for (int j = 1; j <= 10; j++){
                cout << "[" << j << "] " << unameagain << endl;
            }
        }

        cout << endl;
        cout << "Input Your Name Again: ";
        getline (cin, unameagainagain);
        after_choice_clear();

        cout << "Displaying name 5 times within 10 times (blocks) and within 3 times (blocks)";
        for (int i = 1; i <= 3; i++){
            cout << endl << "1st Block [" << i << "]" << endl;
            for (int j = 1; j <= 10; j++){
                cout << endl;
                cout << endl << "2nd Block [" << j << "]" << endl;
                for (int k = 1; k <= 5; k++){
                cout << "[" << k << "] " << unameagainagain << endl;
                }
            }
        }

        cout << endl;
        cout << endl;
        enter_to_continue();
    } while (1);

    return 0;
}

void after_choice_clear (){
    system ("cls");
}

void enter_to_continue(){
    cout << "Press Enter to Restart...";
    if (getchar() == '\n'){
        system ("cls");
    }
}