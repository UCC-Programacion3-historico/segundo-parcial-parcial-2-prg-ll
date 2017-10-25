#include <string>

#ifndef EMAIL_H
#define EMAIL_H

using namespace std;

typedef struct {
    int dd; //2 cifras
    int mm; //2 cifras
    int yy; //4 cifras
}fecha;

/**
 * Clase con los datos del mail
 */
class email {
public:
    email(unsigned long id, const string &from, const string &to, const string &date, const string &subject,
          const string &content);

    virtual ~email();

    unsigned long getId() const;

    void setId(unsigned long id);

    const string &getFrom() const;

    void setFrom(const string &from);

    const string &getTo() const;

    void setTo(const string &to);

    const string &getDate() const;

    void setDate(const string &date);

    const string &getSubject() const;

    void setSubject(const string &subject);

    const string &getContent() const;

    void setContent(const string &content);

public:
    unsigned long id;
    string from;
    string to;
    fecha date;
    string subject;
    string content;
};

email::email(unsigned long id, const string &from, const string &to, const fecha &date, const string &subject,
             const string &content) : id(id), from(from), to(to), date(date), subject(subject), content(content) {
    id = 0;
    from = nullptr;
    to = nullptr;
    date.dd = 0;
    date.mm = 0;
    date.yy = 0;
    subject = nullptr;
    content = nullptr;

}

email::~email(){=default
}

unsigned long email::getId() const {
    return id;
}

void email::setId(unsigned long id) {
    email::id = id;
}

const string &email::getFrom() const {
    return from;
}

void email::setFrom(const string &from) {
    email::from = from;
}

const string &email::getTo() const {
    return to;
}

void email::setTo(const string &to) {
    email::to = to;
}

const string &email::getDate() const {
    return date;
}

void email::setDate(const string &date) {
    email::date = date;
}

const string &email::getSubject() const {
    return subject;
}

void email::setSubject(const string &subject) {
    email::subject = subject;
}

const string &email::getContent() const {
    return content;
}

void email::setContent(const string &content) {
    email::content = content;
}

#endif // EMAIL_H
