#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void Login();
void Registration();
void forgot();

int main(){
    int choice;
    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"------------------------Welcome to the login page----------------------------\n";
    cout<<"                                                                             \n";
    cout<<"Press 1 to login\n";
    cout<<"Press 2 to register\n";
    cout<<"Press 3 if you forget password\n";
    cout<<"Press 4 to exit\n";
    cout<<"Enter your choice\n";
    cin>> choice;
    cout<<endl;

    switch (choice)
    {
    case 1:
        Login();
        break;
    case 2:
        Registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout<<"Thank you\n";
        break;
    
    default:
        system("cls");
        cout<<"Please choose the options given above"<<endl;
        main();
    }

    return 0;
}


void Login() {  
    int count=0;
    string username,password,id,pass;
    system("cls"); // cls is used to clear the screen.

    cout<<"Enter your username & password.\n";
    cout<<"Enter your username: "<<endl;
    cin>>username;
    cout<<"Enter your password: "<<endl;
    cin>>password;

    ifstream input("authentication.txt");

    while(input>>id>>pass){
        if(id==username && pass==password){
            count = 1;
            system("cls");
        }
    }
        input.close(); // We will close the remaining screen.

        if(count==1){
            cout<<username<<"\nYour login is successful";
            
        }else{
            cout<<"please write it correctly\n";
            
        }
}


void Registration(){
    
    string register_id,register_pass,register_username,register_password;
    
    //First declare username & password for user entry. 

    cout<<"Enter a new username: "<<endl;
    cin>>register_username;
    cout<<"Enter a new password: "<<endl;
    cin>>register_password;

    ofstream f1("authentication.txt",ios::app);
    f1<<register_username<<' '<<register_password<<endl;
    cout<<"Your registration is successful";
    main();


}

void forgot(){
    int option; //Declare a variable to choose  
    system("cls");
    cout<<"Forgot password?: ";
    cout<<"Press 1 to search by your id name"<<endl;
    cout<<"Press 2 to search by your pass"<<endl;
    cin>>option;

    switch (option)
    {
        case 1: {
            int count = 0; // Initialize count
            string s_id, s_pass, s_username;
            cout << "\nEnter the username: " << endl;
            cin >> s_username;

            ifstream f2("authentication.txt");
            bool found = false; // Flag to track if user is found

            while(f2 >> s_id >> s_pass) {
                if(s_id == s_username) {
                    found = true;
                    break; // Exit the loop once user is found
                }
            }
            f2.close();

            if (found) {
                cout << "Your account is found." << endl;
                cout << "Your password is: " << s_pass << endl;
            } else {
                cout << "Sorry, we didn't find your account." << endl;
            }
            break;
        }

        case 2:
            
            break;

        default:
            cout << "Wrong choice! Please try again.\n";
            forgot(); 
    }
}
