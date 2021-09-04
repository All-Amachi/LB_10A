
#include <iostream>
void Side(int side1, int side2 = 2)
{
    int P = side1 * side2;
    std::cout << P << '\n';
}
int main()
{
    Side(5);
    Side(5, 7);


}
