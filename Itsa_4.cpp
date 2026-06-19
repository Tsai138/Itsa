#include<iostream>
int main() {
    int src_hours, src_min;
    int end_hours, end_min;
    std::cin >> src_hours >> src_min;
    std::cin >> end_hours >> end_min;

    int min = end_min - src_min;
    int hours = end_hours - src_hours;
    hours = hours > 0 ? hours : -1 * hours;
    min += hours * 60;

    int Money;
    if(min <= 120) Money = (min / 30) * 30;
    else if(min > 120 && min <= 240) Money = 120 + ((min - 120) / 30) * 40;
    else if(min > 240) Money = 280 + ((min - 240) / 30) * 60;

    std::cout << Money;
    return 0;
}
