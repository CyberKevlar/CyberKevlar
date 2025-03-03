#include <iostream>

bool goodTeamPartner = true;
bool workSmarterNotHarder = true;

std::string open2Work(std::string me){
    std::cout << me << std::endl;
}

int main(void)
{
    if(goodTeamPartner && workSmarterNotHarder) {
        open2Work("JUAN CARLOS MARTOS VERGARA");
    }
    return 0;
}

