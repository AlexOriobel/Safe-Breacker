#include "ctime"
#include "iostream"

bool PlayGame(int difficule)
{
    //
    std::cout << std::endl;
    std::cout << "You are a best Sefe-Breaker and some one give a clue in a fat safe " << difficule - 1 << " level difficulte";
    std::cout << std::endl;
    std::cout << "Enter a code to get you`r money or it maybe a trep" << std::endl;

    // Declare 3 number code
    srand(time(NULL));
    int CodeA = rand() % difficule + difficule;
    int CodeB = rand() % difficule + difficule;
    int CodeC = rand() % difficule + difficule;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << "Ouer \"Frend\" give you a tip!" << std::endl;
    std::cout << std::endl;
    std::cout << "!-> There is a 3 number in the code" << std::endl;
    std::cout << "!-> The sum of code is " << CodeSum << std::endl;
    std::cout << "!-> The code multiply to give " << CodeProduct << std::endl;

    int answer;
    int TrialSum = 0;
    int TrialProduct = 1;

    std::cout << std::endl;
    std::cout << "Do a littele space in a code and dont forget tap X button on a safe after you enter a code! " << std::endl;
    std::cout << std::endl;
    std::cout << "I know that you professional, but bee cefule out ther" << std::endl;
    std::cout << std::endl;

    while (std::cin >> answer)
    {
        TrialSum += answer;
        TrialProduct *= answer;
    }

    std::cout << TrialSum << std::endl;
    std::cout << TrialProduct << std::endl;

    std::cout << std::endl;
    if (TrialSum == CodeSum && TrialProduct == CodeProduct)
    {
        std::cout << "You robbed that safe buddy!!!" << std::endl;
        std::cout << "+++++++++++++++++++++++++++++" << std::endl;
        std::cout << std::endl;
        return true;
    }
    else
    {
        std::cout << "Cops !!! You need to run or they get caught you" << std::endl;
        std::cout << "->->->->->->->->->->->->->->->->->->->->->->->->" << std::endl;
        return false;
    }
}

int main()
{
    int Difficul = 2;
    int const MaxDiffical = 10;

    while (Difficul <= MaxDiffical)
    {

        bool bLevelComplet = PlayGame(Difficul);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplet)
        {
            ++Difficul;
        }
    }

    std::cout << "Well done buddy. You have enugh money for the rest of you`r life" << std::endl;

    return 0;
}