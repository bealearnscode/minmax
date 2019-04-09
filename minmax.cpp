#include <iostream>
#include <string>
using namespace std;

// Beatrix House


// return larger number
template <class T>
T Maximum (T num1, T num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

// return smaller number
template <class T>
T Minimum(T num1, T num2)
{
	if (num1 < num2)
	{
	   return num1;
	}
	else
	{
		return num2;
	}
}


int main()
{
	int number1, number2;
	double doubleNumber1, doubleNumber2;
	string word1, word2;

    // Integer functions
	cout << "Enter two whole numbers." << endl;
	cin  >> number1 >> number2;
	
	cout << "The larger number of " << number1 << " and " << number2 << " is " << Maximum(number1, number2) << endl;
	cout << "The smaller number of " << number1 << " and " << number2 << " is " << Minimum(number1, number2) << endl;
	

    // Double functions
	cout << "\nEnter two doubles/floats/numbers with decimals." << endl;
	cin  >> doubleNumber1 >> doubleNumber2;
	
	cout << "The larger number of " << doubleNumber1 << " and " << doubleNumber2 << " is " << Maximum(doubleNumber1, doubleNumber2) << endl;
	cout << "The smaller number of " << doubleNumber1 << " and " << doubleNumber2 << " is " << Minimum(doubleNumber1, doubleNumber2) << endl;

	// String functions
	cout << "\nEnter two words." << endl;
	cin >> word1 >> word2; 
	
	cout << "The maximum of " << word1 << " and " << word2 << " is " << Maximum(word1, word2) << endl;
	cout << "The minimum of " << word1 << " and " << word2 << " is " << Minimum(word1, word2) << endl;

	return 0;
}