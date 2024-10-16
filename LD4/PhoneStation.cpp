#include "PhoneStation.h"

// ����������� �������� �����
Subscriber::Subscriber(const std::string& name, const std::string& phoneNumber, const std::string& packageType, double balance, bool isActive)
    : name(name), phoneNumber(phoneNumber), packageType(packageType), balance(balance), isActive(isActive) {
    std::cout << "Subscriber created: " << name << std::endl;
}

// ���������� �������� �����
Subscriber::~Subscriber() {
    std::cout << "Subscriber destroyed: " << name << std::endl;
}

// ����� ��� ������ ������� ��������
void Subscriber::printDetails() const {
    std::cout << "Name: " << name
        << "\nPhone Number: " << phoneNumber
        << "\nPackage Type: " << packageType
        << "\nBalance: " << balance
        << "\nActive: " << (isActive ? "Yes" : "No") << std::endl;
}

// ����� ��� ���� ������ ��������
void Subscriber::setPhoneNumber(const std::string& newNumber) {
    phoneNumber = newNumber; // ����� ����� ���� �������� protected ����
}

// ����������� ����� "�����������"
Administrator::Administrator(const std::string& name, const std::string& phoneNumber, const std::string& packageType, double balance, bool isActive, int adminID)
    : Subscriber(name, phoneNumber, packageType, balance, isActive), adminID(adminID) {
    std::cout << "Administrator created: " << name << std::endl;
}

// ����� ��� ���� ������ �������� ��������
void Administrator::changeSubscriberNumber(Subscriber& subscriber, const std::string& newNumber) {
    subscriber.setPhoneNumber(newNumber); // ������������� ����� �����
    std::cout << "Changed phone number to: " << newNumber << std::endl;
}

// ����������� ����� "�������������"
PremiumSubscriber::PremiumSubscriber(const std::string& name, const std::string& phoneNumber, const std::string& packageType, double balance, bool isActive, int premiumID)
    : Subscriber(name, phoneNumber, packageType, balance, isActive), premiumID(premiumID) {
    std::cout << "Premium Subscriber created: " << name << std::endl;
}

// ����� ������� �� ������ �������
void PremiumSubscriber::accessPremiumFeatures() {
    std::cout << name << " has access to premium features!" << std::endl;
}

// ����������� ����� "�������"
Device::Device(const std::string& deviceName, const std::string& deviceType)
    : deviceName(deviceName), deviceType(deviceType) {
    std::cout << "Device created: " << deviceName << std::endl;
}

// ����� ��� ������ ���������� ��� �������
void Device::displayDeviceInfo() const {
    std::cout << "Device Name: " << deviceName << "\nDevice Type: " << deviceType << std::endl;
}

// ����������� ����� "������� � ��������"
SubscriberWithDevice::SubscriberWithDevice(const std::string& name, const std::string& phoneNumber, const std::string& packageType, double balance, bool isActive, const std::string& deviceName, const std::string& deviceType)
    : Subscriber(name, phoneNumber, packageType, balance, isActive), Device(deviceName, deviceType) {
    std::cout << "Subscriber with Device created: " << name << std::endl;
}

// ����� ��� ������ ������� �������� �� ��������
void SubscriberWithDevice::printSubscriberAndDeviceDetails() const {
    printDetails();
    displayDeviceInfo();
}
