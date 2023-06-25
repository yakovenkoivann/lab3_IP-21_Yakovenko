#pragma once
#include <iostream>
#include <string>


using namespace std;
class Text {
    string text;
public:
    Text() {}
    Text(string s) : text(s) {}

    string getText() const;
    void setText(string s);
    void appendText(string s);
    double percentDigits();

};
