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
    void setCode(const string& c) {
        code = c;
    }
    string getName() const {
        return name;
    }
    void setName(const string& n) {
        name = n;
    }
    int getPrice() const {
        return price;
    }
    void setPrice(const int& p) {
        price = p;
    }


};
#endif 


