#ifndef CREDIT_CARD_PAYMENT_STRATEGY_H
#define CREDIT_CARD_PAYMENT_STRATEGY_H

#include "PaymentStrategy.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class CreditCartPaymentStrategy: public PaymentStrategy {
private: 
    string cardNumber;
public: 
    CreditCartPaymentStrategy(const string& card) {
        cardNumber = card;
    }
    void pay(double amount) override {
        cout << "Paid ₹" << amount << " using Credit Card (" << cardNumber << ")" << endl;
    }
};

#endif