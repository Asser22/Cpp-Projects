#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn(){
    string userName;
    string password;
    string userNameTrial;
    string passwordTrial;

    cout << "Enter username: ";
    cin >> userName;
    cout << "Enter password: ";
    cin >> password;

    ifstream read("data\\" + userName + " .txt");
    getline(read, userNameTrial);
    getline(read, passwordTrial);

    if (userNameTrial == userName && passwordTrial == password){
        return true;
    }else{
        return false;
    }

}

int main(){

    int choice;

    cout << "1: Register\n";
    cout << "2: Login\n";
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1){
        string userName;
        string password;

        cout << "select a username: ";
        cin >> userName;

        cout << "select a password: ";
        cin >> password;

        ofstream file;
        file.open("data\\" + userName + " .txt");
        file << userName << endl << password;
        file.close();

        main();

    }
    else if (choice == 2){
        bool status = IsLoggedIn();

        if (!status){
            cout << "False Login!" << endl;
            cout << "Repeat Again!\n";
            main();
            return 0;
        }
        else{
            cout << "Succesfully logged in!" << endl;
            system("PAUSE");
            return 1;
        }
    }
}
