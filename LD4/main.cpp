#include "PhoneStation.h"

int main() {
    // ��������� ��������
    Subscriber sub1("Alice", "11111", "Basic", 50.0, true);
    sub1.printDetails();

    // ��������� ������������
    Administrator admin("Bob", "22222", "Premium", 150.0, true, 1);
    admin.printDetails();

    // ���� ������ �������� ��������
    admin.changeSubscriberNumber(sub1, "33333");
    sub1.printDetails();

    // ��������� ������ ��������
    PremiumSubscriber premiumSub("Charlie", "44444", "Gold", 200.0, true, 2);
    premiumSub.printDetails();
    premiumSub.accessPremiumFeatures();

    // ��������� �������� � ��������
    SubscriberWithDevice subWithDevice("Diana", "55555", "Standard", 70.0, true, "Home Phone", "Landline");
    subWithDevice.printSubscriberAndDeviceDetails();

    return 0;
}
