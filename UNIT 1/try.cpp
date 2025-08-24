#include <iostream>
#include <string>
using namespace std;

// Superclass: Profile
class Profile {
protected:
    string studentName;
    int studentID;

public:
    Profile(string name, int id) : studentName(name), studentID(id) {}
    
    virtual void display() const {
        cout << "Student Name: " << studentName << ", ID: " << studentID << endl;
    }

    virtual ~Profile() {}
};

// Derived class: Accounts
class Accounts : public Profile {
private:
    float balance;

public:
    Accounts(string name, int id, float bal) : Profile(name, id), balance(bal) {}

    void display() const override {
        Profile::display();
        cout << "Balance: $" << balance << endl;
    }

    void payFees(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Paid: $" << amount << ", Remaining Balance: $" << balance << endl;
        } else {
            cout << "Invalid payment amount." << endl;
        }
    }
};

// Derived class: Academic
class Academic : public Profile {
private:
    string subject;
    int semester;

public:
    Academic(string name, int id, string sub, int sem) : Profile(name, id), subject(sub), semester(sem) {}

    void display() const override {
        Profile::display();
        cout << "Subject: " << subject << ", Semester: " << semester << endl;
    }

    void changeSubject(string newSubject) {
        subject = newSubject;
        cout << "Subject changed to: " << subject << endl;
    }
};

// Derived class: StudentLeave
class StudentLeave : public Profile {
private:
    string reason;
    int days;

public:
    StudentLeave(string name, int id, string leaveReason, int leaveDays) 
        : Profile(name, id), reason(leaveReason), days(leaveDays) {}

    void display() const override {
        Profile::display();
        cout << "Leave Reason: " << reason << ", Days: " << days << endl;
    }

    void applyLeave(string newReason, int newDays) {
        reason = newReason;
        days = newDays;
        cout << "Leave applied for: " << reason << ", Days: " << days << endl;
    }
};

// Derived class: Examination
class Examination : public Profile {
private:
    string examName;
    string examDate;

public:
    Examination(string name, int id, string exName, string exDate) 
        : Profile(name, id), examName(exName), examDate(exDate) {}

    void display() const override {
        Profile::display();
        cout << "Exam Name: " << examName << ", Exam Date: " << examDate << endl;
    }

    void updateExamDate(string newDate) {
        examDate = newDate;
        cout << "Exam date updated to: " << examDate << endl;
    }
};

// Main function
int main() {
    // Create objects for each subclass
    Accounts acc("John Doe", 101, 5000);
    Academic acad("John Doe", 101, "Mathematics", 3);
    StudentLeave leave("John Doe", 101, "Medical", 5);
    Examination exam("John Doe", 101, "Math Final", "2025-05-10");

    // Display all information
    acc.display();
    acad.display();
    leave.display();
    exam.display();

    // Perform operations
    cout << "\nPerforming updates:\n";
    acc.payFees(1000);
    acad.changeSubject("Physics");
    leave.applyLeave("Family Emergency", 7);
    exam.updateExamDate("2025-06-01");

    return 0;
}
