#include <time.h>
#include <iostream>
#include <bitset>
#include <string>
#include <fstream>

using namespace std;


unsigned short bigToLittle(unsigned short value)
{
    unsigned short tValue;
    tValue = value >> 8; value = value << 8;
    return tValue ^ value;
}


std::string binary_str16(unsigned short n)
{
    std::bitset<16> bs(n);
    return bs.to_string();
}

unsigned char middle (unsigned short value) {
    unsigned char c =  4;
    return c;
}


void OutStream (unsigned char no, unsigned char c)

{
    std::ofstream outfile;
    outfile.open("intelEndian.txt", std::ios::app);
    outfile << binary_str16(bigToLittle(no)) << " ";
    outfile.close();

    //
    outfile.open("unsignedChar.txt", std::ios::app);
    outfile << static_cast<unsigned>(c) << " ";
    outfile.close();
}


void Middlestream()
{
    std::ifstream infile;
    unsigned short no;
    infile.open("unsignedShort.txt");

    while (infile >> no)
    {
        OutStream(no, middle(bigToLittle(no)));
    }
    infile.close();
}

void InputFile()
{
    ofstream outfile;
    outfile.open("unsignedShort.txt");
    unsigned short no;
    for (short i = 0; i <= 49; i++)
    {
        no = rand();
        outfile << no << " ";
    }
    outfile.close();
}



int main() {

    Middlestream();
    InputFile();


}

