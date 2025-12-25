#ifndef MENUITEM_H
#define MENUITEM_H

#include<bits/stdc++.h>
using namespace std;

class MenuItem {
private:
    string code;
    string name;
    int price;
public:
    MenuItem(const string& code, const string& name, const int& price) {
        this->name = name;
        this->code = code;
        this->price = price;
    }

    string getCode() const {
        return code;
    }
    string setCode(const string& c) {
        code = c;
    }
    string getName() const {
        return name;
    }
    string setName(const string& n) {
        name = n;
    }
    int getPrice() const {
        return price;
    }
    int setPrice(const int& p) {
        price = p;
    }


};
#endif 