#ifndef ORDER_MANAGER_H
#define ORDER_MANAGER_H

#include<bits/stdc++.h>
#include "models/Order.h"
using namespace std;

class OrderManager {
private: 
    vector<Order*>orders;
    static OrderManager* instance;

    OrderManager() {

    }
public:
    static OrderManager* getInstace() {
        if(!instance) {
            instance = new OrderManager;
        }
        return instance;
    }


    void listOrders() {
        cout << "\n---- All Orders ----" << endl;
        for(auto& order: orders) {
            cout << order->getType() << " order for " << order->getUser()->getName() << " | Total: ₹" << order->getTotal() << " | At: " << order->getScheduled() << endl;
        }
    }
};

OrderManager* OrderManager::intance = nullptr;

#endif