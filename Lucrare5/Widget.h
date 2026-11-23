#ifndef WIDGET_H
#define WIDGET_H

class Widget 
{
private:
    int* val;

public:
    explicit Widget(int value);

    Widget(const Widget& other);

    Widget& operator=(const Widget& other);

    ~Widget();

    void display() const;
};

#endif
