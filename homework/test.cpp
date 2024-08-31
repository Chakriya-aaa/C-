#include <iostream>
#include <string>
using namespace std;

class Bookshop{
    private:
        int id;
        string title;
        string author;
    public:
        bookshop(int id, string title, string author){
            this->id = id;
            this->title = title;
            this->author = author;
        }
    void getBookshopDetail(){
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main(){
    system("cls");
    Bookshop bookshop;
    bookshop.bookshop(1212, "I Want to Die but I Want to Eat Tteokpokki", "Baek Se-hee");
    bookshop.getBookshopDetail();
    return 0;
}