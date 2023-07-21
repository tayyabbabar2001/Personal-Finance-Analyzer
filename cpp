#include <iostream>
# include <cmath>

using namespace std;

int main(){
	int grocery, rent, clothing, other, saving, income, expenses, percentage;
	cout<<"Enter income:";
	cin >> income;
	cout << "Enter grocery ";
    cin >> grocery;
    cout << "Enter rent: ";
    cin >> rent;
    cout << "Enter clothing: ";
    cin >> clothing;
    cout << "Enter other: ";
    cin >> other;
    expenses = grocery + rent + clothing + other;
    saving = income - expenses;
    percentage = income * 0.20;
    if (saving < 0)
    	{
		cout<<"Poor Savings";
    }
    else if (saving > 0 && saving < percentage) 
    {
		cout<<" Little saving";
	}
	else if (saving > percentage)
	{
		cout<<"Good savings";
	}
}
    
    
    
