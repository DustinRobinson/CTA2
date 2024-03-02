/*
 * main.cpp
 *
 *  Created on: Mar 2, 2024
 *  Author: Dustin Robinson
 */
#include <iostream>;

using namespace std;

int main()
{
	string first = "";
	string second = "";

	//program start
	cout<<"Program start"<<endl;
	cout<<"This program combines two user entries and outputs them to console."<<endl;
	cout<<"It will repeat this action three times."<<endl;


	for (int i = 0; i < 3; i++)
	{
		cout<<"Please, enter first portion of text."<<endl;
		getline(cin, first);
		cout<<"Please, enter second portion of text to be combined."<<endl;
		getline(cin, second);

		//this just calls append inline//first.append(second); achieves the same
		first += second;
		cout<<first<<endl;
	}
	cout<<"Program end"<<endl;
	return 0;
}



