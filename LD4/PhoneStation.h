#ifndef PHONESTATION_H
#define PHONESTATION_H

#include <iostream>
#include <string>
#include <vector>

// ������� ���� "�������"
class Subscriber {
public:
    Subscriber(const std::string&, const std::string&, const std::string&, double, bool);
    virtual ~Subscriber(); // ����������

    void printDetails() const;
    void setPhoneNumber(const std::string& newNumber); // ����� ��� ���� ������

protected:
    std::string name;          // ��'� ��������
    std::string phoneNumber;   // ����� ��������
    std::string packageType;   // ��� ������ ������
    double balance;            // ������
    bool isActive;             // ������ ���������
};

// �������� ���� "�����������"
class Administrator : public Subscriber {
public:
    Administrator(const std::string&, const std::string&, const std::string&, double, bool, int);
    void changeSubscriberNumber(Subscriber&, const std::string&);

private:
    int adminID;               // ID ������������
};

// ���������� �������� ���� "�������������"
class PremiumSubscriber : public Subscriber {
public:
    PremiumSubscriber(const std::string&, const std::string&, const std::string&, double, bool, int);
    void accessPremiumFeatures();

private:
    int premiumID;             // ID ������ ��������
};

// �������� �����������
class Device {
public:
    Device(const std::string&, const std::string&);
    void displayDeviceInfo() const;

protected:
    std::string deviceName;   // ����� ��������
    std::string deviceType;   // ��� ��������
};

// ���� "������� � ��������", �� ��������� �������� �����������
class SubscriberWithDevice : public Subscriber, public Device {
public:
    SubscriberWithDevice(const std::string&, const std::string&, const std::string&, double, bool, const std::string&, const std::string&);
    void printSubscriberAndDeviceDetails() const;
};

#endif // PHONESTATION_H
