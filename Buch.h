#ifndef BUCH_H
#define BUCH_H

#include <string>

class Buch {
public:
    Buch();
    +

    Buch(const std::string &isbn, const std::string &title, const std::string &author);

    std::string getISBN() const;
    std::string getTitle() const;
    std::string getAuthor() const;

    void setISBN(const std::string &isbn);
    void setTitle(const std::string &title);
    void setAuthor(const std::string &author);

private:
    std::string isbn;
    std::string title;
    std::string author;
};

#endif // BOOK_H
