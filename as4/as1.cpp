#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    double price;

public:
    void setTitle(string t) {
        title = t;
    }

    void setAuthor(string a) {
        author = a;
    }

    void setPrice(double p) {
        price = p;
    }

    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }

    double getPrice() {
        return price;
    }
};

int main() {
	
    Book book1, book2;
    book1.setTitle("The Great Gatsby");
    book1.setAuthor("F. Scott Fitzgerald");
    book1.setPrice(10.99);

    book2.setTitle("1984");
    book2.setAuthor("George Orwell");
    book2.setPrice(8.99);

    cout << "Book 1 Details:" << endl;
    cout << "Title: " << book1.getTitle() << endl;
    cout << "Author: " << book1.getAuthor() << endl;
    cout << "Price: $" << book1.getPrice() << endl;

    cout << endl;

    cout << "Book 2 Details:" << endl;
    cout << "Title: " << book2.getTitle() << endl;
    cout << "Author: " << book2.getAuthor() << endl;
    cout << "Price: $" << book2.getPrice() << endl;

    return 0;
}

