#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Book class
class Book {
private:
    string name;
    string author;
    bool isAvailable;

public:
    Book(string bookName, string bookAuthor, bool availability);
    string getName() const;
    string getAuthor() const;
    bool getAvailability() const;
    void setAvailability(bool availability);
};

// Student class
class Student {
private:
    string id;
    string password;
    double penalty;

public:
    Student(string studentID, string studentPassword, double initialPenalty);
    string getId() const;
    double getPenalty() const;
    void setPenalty(double newPenalty);
    bool authenticate(string studentPassword) const;
};

// Admin class
class Admin {
private:
    string id;
    string password;

public:
    Admin(string adminID, string adminPassword);
    string getId() const;
    string getPassword() const;
    bool authenticate(string adminID, string adminPassword) const;
};

// LibrarySystem class to manage the library operations
class LibrarySystem {
private:
    vector<Book> books;
    vector<Student> students;
    Admin admin;

public:
    LibrarySystem();
    void adminLogin();
    void studentLogin();
    void addBook();
    void checkStudentPenalty();
    void searchBook();
    void borrowBook();
    void returnBook();
};

#endif