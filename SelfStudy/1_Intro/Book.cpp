#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    double price;

    void showInfo()
    {
        cout << "Title: " << title
             << " | Author: " << author
             << " | Price: $" << price << endl;
    }
};

int main(){
    int n;
    cout << "How many books you want to add: ";
    cin >> n;

    Book* book = new Book[n];

    cout << "\n--- Enter Book Details ---\n";
    for(int i=0; i<n; i++){
        cout << "\nBook " << i + 1 << ":\n";
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, book[i].title);
        cout << "Enter author: ";
        getline(cin, book[i].author);
        cout << "Enter price: ";
        cin >> book[i].price;
    }

    cout << "\n--- Book List ---\n";
    for(int i=0; i<n; i++){
        cout << i + 1 << ". ";
        book[i].showInfo();
    }

    int updateIndex;
    cout << "\nEnter the book number to update (1-" << n << "): ";
    cin >> updateIndex;
    if(updateIndex >= 1 && updateIndex <= n){
        int idx = updateIndex - 1;
        cout << "\nUpdating Book " << updateIndex << ":\n";
        cin.ignore();
        cout << "Enter new title: ";
        getline(cin, book[idx].title);
        cout << "Enter new author: ";
        getline(cin, book[idx].author);
        cout << "Enter new price: ";
        cin >> book[idx].price;
    }else{
        cout << "Invalid book number!\n";
    }

    cout << "\n--- Updated Book List ---\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        book[i].showInfo();
    }

    delete[] book;
    cout << "\nAll books deleted from memory.\n";

    return 0;
}