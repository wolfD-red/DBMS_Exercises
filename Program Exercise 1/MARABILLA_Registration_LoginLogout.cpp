#include <iostream>

using namespace std;

int User_record = 0;
const int Record = 61;
string storage_data[Record][8];

void Show_Menu();

string Generate_ID();
void Add_Data();
void Login (string ID, string passwordd);
void Login_Success ();

bool isDigits(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

void after_choice_clear(){
    system ("cls");
}


int main (){

    string passwordd = storage_data [User_record][7];
    string ID = storage_data [User_record][6];
    int menuchoice;

    do{
        Show_Menu();
        cout << "Choice: ";
        cin >> menuchoice;
    
        switch (menuchoice){
            case 1:
                Login(ID, passwordd);
                break;

            case 2:
                Add_Data();
                break;

            case 3:
                return 0;

        } 
    } while (menuchoice != 4);
    return 0;
}


void Show_Menu()
{

    cout << '\n';
    cout << "\t\t\t\t\tWELCOME!" << '\n';
    cout << '\n';

    cout << "*********************************************************************************************\n";
    cout << "\t\t\t\tWHAT DO YOU WANT TO DO? \n";
    cout << "*********************************************************************************************\n";
    cout << endl;
    cout << "1. Login\n";
    cout << "2. Register\n";
    cout << "3. Exit\n";
}

    void Add_Data(){
    string name, gender, contact, address, email, password;
    int age;

    cout << "\nEnter Full Name: ";
    cin.ignore();
    getline(std::cin, name);

    std::string ageStr;
    do {
        std::cout << "\nEnter Age: ";
        std::cin >> ageStr;
        std::cin.ignore();

        if (!isDigits(ageStr)) {
            std::cout << "Please enter a valid age (digits only)." << std::endl;
        } else {
            age = std::stoi(ageStr); // Convert string to integer
            break;
        }
    } while (true);

    cout << "\nEnter Gender: ";
    cin >> gender;

    cout << "\nContact Number: ";
    cin.ignore();
    getline(cin, contact);

    cout << "\nAddress: ";
    getline(cin, address);

    cout << "\nEmail Address: ";
    cin >> email;

    cout << "\nPassword: ";
    cin >> password;

    string ID = Generate_ID();

    storage_data[User_record][0] = name;
    storage_data[User_record][1] = to_string(age);
    storage_data[User_record][2] = gender;
    storage_data[User_record][3] = contact;
    storage_data[User_record][4] = address;
    storage_data[User_record][5] = email;
    storage_data[User_record][6] = ID;
    storage_data[User_record][7] = password;
    User_record++;

    cout << '\n';
    cout << '\n';
    cout << "Data Added Successfully!" << '\n';
    cout << "Your ID is: " << ID << '\n';
    cout << "REMEMBER YOUR ID (Username) & PASSWORD. THIS WILL BE USED FOR YOUR LOGIN.\n";
    cout << '\n';
    cout << '\n'; 
}

string Generate_ID()
{
    return to_string (4440 + User_record); /*Rand function*/
}


void Login(string ID, string passwordd) {
    if (User_record == 0) {
        cout << "\n\nNo user found. Please Register First.\n";
    } else {
        bool userFound = false;
        do {
            cout << "\n\nUsername: ";
            cin >> ID;

            cout << "Password: ";
            cin >> passwordd;

            userFound = false; // Reset flag for each new iteration

            for (int i = 0; i < User_record; i++) {
                if (storage_data[i][6] == ID && storage_data[i][7] == passwordd) {
                    userFound = true; // Set flag if user is found
                    Login_Success();
                    return;
                }
            }

            if (!userFound) {
                cout << "\n\nWrong Username or Password. Try Again.\n";
            }

        } while (true);
    }
}
   
void Login_Success (){
    int logoutchoice;

    cout << "Hello!";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "Logout" << endl;
    cout << "1. Yes" << endl;
    cin >> logoutchoice;

    if (logoutchoice == 1){
        return;
    }

    
}



