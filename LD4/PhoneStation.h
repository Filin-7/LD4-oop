#ifndef PHONESTATION_H
#define PHONESTATION_H

#include <iostream>
#include <string>
#include <vector>

// Базовий клас "Абонент"
class Subscriber {
public:
    Subscriber(const std::string&, const std::string&, const std::string&, double, bool);
    virtual ~Subscriber(); // Деструктор

    void printDetails() const;
    void setPhoneNumber(const std::string& newNumber); // Метод для зміни номера

protected:
    std::string name;          // Ім'я абонента
    std::string phoneNumber;   // Номер телефону
    std::string packageType;   // Тип пакету послуг
    double balance;            // Баланс
    bool isActive;             // Статус активності
};

// Похідний клас "Адміністратор"
class Administrator : public Subscriber {
public:
    Administrator(const std::string&, const std::string&, const std::string&, double, bool, int);
    void changeSubscriberNumber(Subscriber&, const std::string&);

private:
    int adminID;               // ID адміністратора
};

// Додатковий похідний клас "ПреміумАбонент"
class PremiumSubscriber : public Subscriber {
public:
    PremiumSubscriber(const std::string&, const std::string&, const std::string&, double, bool, int);
    void accessPremiumFeatures();

private:
    int premiumID;             // ID преміум абонента
};

// Множинне наслідування
class Device {
public:
    Device(const std::string&, const std::string&);
    void displayDeviceInfo() const;

protected:
    std::string deviceName;   // Назва пристрою
    std::string deviceType;   // Тип пристрою
};

// Клас "Абонент з пристроєм", що демонструє множинне наслідування
class SubscriberWithDevice : public Subscriber, public Device {
public:
    SubscriberWithDevice(const std::string&, const std::string&, const std::string&, double, bool, const std::string&, const std::string&);
    void printSubscriberAndDeviceDetails() const;
};

#endif // PHONESTATION_H
