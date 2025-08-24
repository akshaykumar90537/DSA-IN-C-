#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int uid;
    int password;
    float semesterResult;
    bool isAttended;

    Student(string n, int id, int pass)
        : name(n), uid(id), password(pass), semesterResult(0.0), isAttended(false) {}

    bool login(int id, int pass) {
        return (uid == id && password == pass);
    }

    void checkAttendance() {
        if (isAttended) {
            cout << "Attendance has already been marked for " << name << endl;
        } else {
            cout << "Attendance not marked yet for " << name << endl;
        }
    }

    void viewResult() {
        cout << "Result of " << name << ": " << semesterResult << endl;
    }

    void updateResult(float result) {
        semesterResult = result;
    }
};

class Employee {
public:
    int empID;
    float salary;

    Employee(int id, float sal) : empID(id), salary(sal) {}

    void displaySalary() {
        cout << "Employee ID " << empID << "'s Salary: " << salary << endl;
    }

    void updateSalary(float newSalary) {
        salary = newSalary;
        cout << "Salary updated for Employee ID " << empID << endl;
    }
};

class HR {
public:
    vector<Employee> employeeList;

    void addEmployee(Employee e) {
        employeeList.push_back(e);
        cout << "Employee added.\n";
    }

    void displayAllEmployees() {
        for (int i = 0; i < employeeList.size(); i++) {
            employeeList[i].displaySalary();
        }
    }

    Employee* getEmployeeByID(int id) {
        for (int i = 0; i < employeeList.size(); i++) {
            if (employeeList[i].empID == id) {
                return &employeeList[i];
            }
        }
        return nullptr;
    }
};

class Accounts {
public:
    float totalFees;

    Accounts() : totalFees(0.0) {}

    void collectFees(float amount) {
        totalFees += amount;
        cout << "Fees collected: " << amount << endl;
    }

    void viewTotalFees() {
        cout << "Total Fees Collected: " << totalFees << endl;
    }
};

int main() {
    vector<Student> students;
    HR hr;
    Accounts accounts;

    students.push_back(Student("Alice", 101, 12345));
    students.push_back(Student("Bob", 102, 67890));

    hr.addEmployee(Employee(1, 50000));
    hr.addEmployee(Employee(2, 45000));

    int choice;
    do {
        cout << "\n1. Student Login\n2. Employee Management\n3. Accounts\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            int pass;
            cout << "Enter UID: ";
            cin >> id;
            cout << "Enter Password: ";
            cin >> pass;

            bool loggedIn = false;
            for (int i = 0; i < students.size(); i++) {
                if (students[i].login(id, pass)) {
                    loggedIn = true;
                    int studentChoice;
                    do {
                        cout << "\n1. View Result\n2. Check Attendance\n3. Logout\nEnter choice: ";
                        cin >> studentChoice;
                        if (studentChoice == 1) {
                            students[i].viewResult();
                        } else if (studentChoice == 2) {
                            students[i].checkAttendance();
                        }
                    } while (studentChoice != 3);
                    break;
                }
            }
            if (!loggedIn) {
                cout << "Invalid UID or Password.\n";
            }
            break;
        }
        case 2: {
            int hrChoice;
            do {
                cout << "\n1. Display All Employees\n2. Update Employee Salary\n3. Back\nEnter your choice: ";
                cin >> hrChoice;
                if (hrChoice == 1) {
                    hr.displayAllEmployees();
                } else if (hrChoice == 2) {
                    int empID;
                    float newSalary;
                    cout << "Enter Employee ID: ";
                    cin >> empID;
                    cout << "Enter New Salary: ";
                    cin >> newSalary;

                    Employee* employee = hr.getEmployeeByID(empID);
                    if (employee) {
                        employee->updateSalary(newSalary);
                    } else {
                        cout << "Employee not found.\n";
                    }
                }
            } while (hrChoice != 3);
            break;
        }
        case 3: {
            int accChoice;
            do {
                cout << "\n1. Collect Fees\n2. View Total Fees\n3. Back\nEnter your choice: ";
                cin >> accChoice;
                if (accChoice == 1) {
                    float amount;
                    cout << "Enter Fee Amount: ";
                    cin >> amount;
                    accounts.collectFees(amount);
                } else if (accChoice == 2) {
                    accounts.viewTotalFees();
                }
            } while (accChoice != 3);
            break;
        }
        case 4:
            cout << "Exiting system.\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}1