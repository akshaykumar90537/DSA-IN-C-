#include <iostream>
#include <string>
using namespace std;

class Login {
public:
    string uid,pass;
    void display() {
        cout<<"--> SUBMITTED BY : * AKSHAY KUMAR * , * NAMAN NARANG * , * GURASISH SINGH * <--"<<endl<<endl;
        cout<<"-->> Welcome to CUIMS Portal <<--"<<endl;
        while (true) {
            cout << "Enter your Uid: ";
            cin >> uid;
            cout<<"Enter Password: ";
            cin>>pass;
            if (uid == "24BCS11018" && pass=="Naman12345") {
                cout << "Logged in successfully" << endl;
                break;  
            }
            else if (uid == "24BCS11014" && pass=="Akshay12345"){
                cout << "Logged in successfully" << endl;
                break;  
            }
            else if (uid == "24BCS11061" && pass=="Gurashis12345"){
                cout << "Logged in successfully" << endl;
                break;  
            }
            else {
                cout << "Entered UID or Password is not valid." << endl;
            }
        }
    }
};

class Account:public Login
{
public:
    int b;
    void accountshow()
    {
    while(true){
        cout << "1. Transaction\n2. Account reciept" << endl;
        cout << "Enter you choice(1-2)\n";
        cin >> b;
        if(b==1)
        {
            cout << "Your Transaction details" << endl;
            cout << "1.20000\n2.30000\n3.50000" << endl;
            break;
        }
        else if(b==2){
            cout <<"Your all due's are cleared upto date" << endl;
            break;
        }
        else {
            cout << "Enter valid choice" << endl;
        }
    }
    }
};

class Academic:public Login
{
public:
    int b;
    void showacademic()
    {
    while(true){
        cout << "1. Attendance\n 2. Courses\n";
        cout << "Enter your choice(1-2)";
        cin >> b;
        if(b==1)
        {
            cout << "ATTENDANCE:\n";
            cout << " C++ --> 98\n Physics --> 90\n Biology --> 95\n Maths --> 89\n";
            break;
        }
        else if(b==2){
            cout << "COURSES:\n";
            cout << "1. C++\n 2. Physics\n 3. Biology\n 4. Maths\n";
            break;
        }
        else {
            cout << "Enter a valid choices";
        }
    }
}
};
class Examination:public Login
{
    public:
    int c;
    void showexam()
    {
    while(true){
        cout << "1.Datesheet\n 2.Result" << endl;
        cout << "Enter the choices: " << endl;
        cin >> c;
        if(c==1)
        {
            cout << "DATESHEET;\n";
            cout << "6th feb --> Maths\n 8th feb --> Physics \n 9th feb --> Biology\n 10th feb -->3 C++" << endl;
            break;
        }
        else if(c==2){
            cout << "RESULT = Passed\n";
            cout<<"SUBJECTS -->  MARKS\n";
            cout << "Maths --> 70\n Physics --> 80\n Biology --> 66\n C++ --> 88";
            break;
        }
        else{
            cout << "Enter valid choice";
        }
    }
}

};
class Leave:public Login
{
    public:
    void showleave()
    {
        cout << "Duty leave = 4 remaining" << endl;
        cout << "Medical leave = 8 remaining" << endl;
        cout << "General leave = 0 remaining" << endl;
    }
};

class profile:public Login

{
    public:
    void showprofile(string UID)
    {
    while(true){
        if(UID=="24BCS11018"){
            cout << "Name = Naman Narang" << endl;
            cout << "Class = 507 B" << endl;
            cout << "Uid = 24BCS11018" << endl;
            cout << "Course = BE-CSE"<<endl;
            break;
        }
        else if(UID=="24BCS11014"){
            cout << "Name = Akshay Kumar" << endl;
            cout << "Class = 507 B" << endl;
            cout << "Uid = 24BCS11014" << endl;
            cout << "Course = BE-CSE"<<endl;
            break;
        }
        else if(UID=="24BCS11061"){
            cout << "Name = Gurashis singh" << endl;
            cout << "Class = 507 B" << endl;
            cout << "Uid = 24BCS11061" << endl;
            cout << "Course = BE-CSE"<<endl;
            break;
        }
        else{
        cout<<"enter valid UID"<<endl;
}
}
}
};
int main() {
  string UID;
    Login A;
    A.display();
    UID=A.uid ;
    int t; 
    while(true){
    cout << "\n\n1. Accounts\n2. Academic\n3. Examination\n4. Leave\n5. Profile\n6. Exit\n";
    cout << "Enter your choice (1-5): ";
    cin >> t; 
     
    switch (t) {
        case 1: {
            Account B;
            B.accountshow();  
            break;
        }
        case 2: {
            Academic C;
            C.showacademic(); 
            break;
        }
        case 3: {
            Examination D;
            D.showexam();  
            break;
        }
        case 4: {
            Leave E;
            E.showleave(); 
            break;
        }
        case 5: {
            profile F;
            F.showprofile(UID);  
            break;
        }
        case 6:
            cout << "Exiting the portal. Goodbye!\n";
                return 0;
        default:
            cout << "Invalid choice! Please select a number between 1 and 5." << endl;
    }
}
    return 0;
}