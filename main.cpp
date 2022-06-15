#include <iostream>

int NOD(int a, int b)
{
    if (b==0){return a;}
    return NOD(b, a%b);
};
int main() {
    std::cout << NOD(16, 48) << std::endl;
    return 0;
}
