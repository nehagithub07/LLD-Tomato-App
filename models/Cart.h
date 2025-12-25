#ifndef CART_H
#define CART_H

#include<bits/stdc++.h>
#include "MenuItem.h"
#include "Restaurant.h"
using namespace std;


class Cart {
private:
    Restaurant* r;
    vector<MenuItem>items;
public:
    Cart() {
        r = nullptr;
    }
    void addItem(const MenuItem& item) {
        if(!r) {
            cerr << "Cart: set a res before add items." << endl;
            return;
        }
        items.push_back(item);
    }
    double getTotalCost() const {
        double sum = 0;
        for(const auto& it: items) {
            sum += it.getPrice();
        }
        return sum;
    }
    bool isEmpty() {
        return (!r || items.empty());
    }
    void clear() {
        items.clear();
        r = nullptr;
    }
    void setRestaurant(Restaurant* res) {
        r = res;
    }
    Restaurant* getRestaurant() const {
        return r;
    }
    const vector<MenuItem>& getItems() const {
        return items;
    }
};

#endif