#include <iostream>

int main() {
    int num1, num2, sum;

    // 提示用户输入第一个整数//测试Github更新

    //20240511
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    // 提示用户输入第二个整数
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // 计算两个整数的和
    sum = num1 + num2;

    // 显示结果
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}