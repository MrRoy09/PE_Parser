#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include "pe_parser.h"

void printUsage()
{
    std::cout << "Usage: " << "PE_Parser.exe" << " <Path to PE file>\n";
}

int main(int argv, char *argc[])
{
    std::unique_ptr<PE_PARSER> P_PE_PARSER;
    std::string pe_path;
    bool isElf = 1;
    if (argv != 2)
    {
        printUsage();
        return 1;
    }

    else
    {
        pe_path = argc[1];
        P_PE_PARSER = std::make_unique<PE_PARSER>(pe_path, &isElf);
        if (!isElf)
        {
            std::cout << "PE magic bytes not Found" << "\n";
            return 1;
        }
        P_PE_PARSER->Display_All_Information();
    }

    return 0;
}
