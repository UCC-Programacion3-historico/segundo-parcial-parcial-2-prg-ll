#include <string>

#ifndef EMAIL_H
#define EMAIL_H

using namespace std;

/*typedef struct {
    int dd; //2 cifras
    int mm; //2 cifras
    int yy; //4 cifras
    bool Verifica_Fecha();
}fecha;*/  //la fecha y hora es con string -> 2017-25-10 20:25:00 -> para ordenar

/**
 * Clase con los datos del mail
 */
class email {
public:
    email(unsigned long id, const string &from, const string &to, const string &date, const string &subject,
          const string &content);

    email(unsigned long id, const string &from, const string &to, const string &date, const string &subject,
          const string &content, email *next);

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

    email *getNext() const;

    void setNext(email *next);

    email operator = (email m);

public:
    unsigned long id; //incrementa de a 1 : n cifras a decidir
    string from;
    string to;
    string date;
    string subject;
    string content;
    email * next;
};

email::email(unsigned long id, const string &from, const string &to, const string &date, const string &subject,
             const string &content, email *next) : id(id), from(from), to(to), date(date), subject(subject),
                                                   content(content), next(next) {}






email::~email(){

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

email *email::getNext() const {
    return next;
}

void email::setNext(email *next) {
    email::next = next;
}

email email::operator=(email m) {
    id = m.id;
    from = m.from;
    to = m.to;
    date = m.date;
    subject = m.subject;
    content = m.content;
    next = m.next;
}

#endif // EMAIL_H
