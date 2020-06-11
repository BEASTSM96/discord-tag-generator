#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main (){

    int max = 9999, random_number, i;
    for (i = 1; i <=100000000; i = i+1)
    {

        //FOR USER INPUT
        //cout<< "input max int : ";
        //cin >> max;

        //srand(time(0));
        random_number = (rand () % max) + 1;

        stringstream ToPrint;

        ToPrint << random_number;

        std::string curString = ToPrint.str();

        std::ofstream outfile ("numbers.txt");


        if (outfile.is_open())
        {
            outfile << "#" << curString << std::endl; 
        }

        cout << random_number << endl;   
	}

    system("pause");
}