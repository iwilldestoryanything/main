#include "WorkClass.h"
void WorkClass::startWork() {
    std::cout << "Hello ������ World!\n";

    GoodBasic* universalPointer01 = new Freezer(2);
    static_cast<Freezer*>(universalPointer01)->toString();
    GoodBasic* universalPointer02 = new Freezer(2, 222);
    static_cast<Freezer*>(universalPointer02)->toString();
    GoodBasic* universalPointer03 = new Freezer(3, 3333, "NewName");
    static_cast<Freezer*>(universalPointer03)->toString();
    GoodBasic* universalPointer04 = new Freezer(4, 4444, "NewName", "Some description", 3);
    static_cast<Freezer*>(universalPointer04)->toString();
    GoodBasic* universalPointer05 = new Freezer(5, 55555, "NewName5", "Some description5", 5, 
        333, "white", "country", 3);
    static_cast<Freezer*>(universalPointer05)->toString();

   /*������������ ����� GoodBasic �������� 4 ����, ������������ ��� ���� ���������
       ������������ ����� �������������� ��� �� �������� ������. ��� ���� ���������������
                ���� �����������������, �������, ����� �������������� � ������
       �������� �������� ����� ����������� �������� �� ���� ��������� ���� � ������, ������������ ���
       ��������� � ��������������� � ��������� ���� ������, ������� �� ����� ���� � ������ �������
       ���������.*/
}