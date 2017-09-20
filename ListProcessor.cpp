// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "The list has a size of: " << cows.size() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The Sum of the items in this list is: " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "The list has a size of: " << cows.size() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The Sum of the items in this list is: " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "The cows list has a size of: " << cows.size() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The Sum of the items in this list is: " << cows.sum() << endl<<endl;

	cout << "The horses list has a size of: " << horses.size() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "The Sum of the items in this list is: " << horses.sum() << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "The cows list has a size of: " << cows.size() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The Sum of the items in this list is: " << cows.sum() << endl << endl;

	cout << "The horses list has a size of: " << horses.size() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "The Sum of the items in this list is: " << horses.sum() <<endl<<endl;

	List pigs;
	cout << "The cows list has a size of: " << cows.size() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The Sum of the items in this list is: " << cows.sum() << endl << endl;

	cout << "The horses list has a size of: " << horses.size() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The Sum of the items in this list is: " << horses.sum() << endl << endl;

	cout << "The pigs list has a size of: " << pigs.size() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "The Sum of the items in this list is: " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "The cows list has a size of: " << cows.size() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The Sum of the items in this list is: " << cows.sum() << endl << endl;

	cout << "The horses list has a size of: " << horses.size() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The Sum of the items in this list is: " << horses.sum() << endl << endl;

	cout << "The pigs list has a size of: " << pigs.size() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "The Sum of the items in this list is: " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "The cows list has a size of: " << cows.size() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The Sum of the items in this list is: " << cows.sum() << endl << endl;

	cout << "The horses list has a size of: " << horses.size() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The Sum of the items in this list is: " << horses.sum() << endl << endl;

	cout << "The pigs list has a size of: " << pigs.size() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "The Sum of the items in this list is: " << pigs.sum() << endl << endl;

	cows.insertAsLast(12.2);
	horses.insertAsLast(13.3);
	pigs.insertAsLast(14.4);
	cout << "Variables have been inserted on the end"<< endl<<"-----------------------------" << endl;
	cout << "The cows list has a size of: " << cows.size() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The Sum of the items in this list is: " << cows.sum() << endl << endl;

	cout << "The horses list has a size of: " << horses.size() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The Sum of the items in this list is: " << horses.sum() << endl << endl;

	cout << "The pigs list has a size of: " << pigs.size() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "The Sum of the items in this list is: " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
