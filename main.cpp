#include "ArrayList.hpp"

int main() {
    ArrayList<int> list;
    list.push_back(10);
    std::cout << list[9] << " ";
    list.print_list();
}