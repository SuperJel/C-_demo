#include <iostream>

int main() {
    int num1, num2, sum;

    // ��ʾ�û������һ������//����Github����

    //20240511
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    // ��ʾ�û�����ڶ�������
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // �������������ĺ�
    sum = num1 + num2;

    // ��ʾ���
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}