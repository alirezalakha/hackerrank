#include <iostream>
#include <vector>
#include <map>

using namespace std;

main()
{
	
	int number; string entries;
	map<string, string> phoneBook;
	cin >> number; int count = 0;
	string addInput[2]; std::vector<string> givenNames, foundNames;
	
	for (int eachEntry=0; eachEntry<number; eachEntry++)
	{
		for (int take=0; take<2; take++)
		{
			cin >> addInput[take];
		}
		phoneBook[addInput[0]] = addInput[1];
		givenNames.push_back(addInput[0]);
	}

	while (cin >> entries)
	{
		count = 0;
		for (auto gN : givenNames)
		{
			if (entries == gN)
			{
				foundNames.push_back(entries+"="+phoneBook.find(gN)->second);
				count++;
			}
		}
		if (count == 0)
			foundNames.push_back("Not found");
	}

	for (auto fN : foundNames)
	{
		cout << fN << endl;
	}

}


		// searchQueries.push_back(entries);
		// for (map<string, string>::reverse_iterator it=phoneBook.rbegin(); it!=phoneBook.rend(); ++it)
		// {

		// 	if ( sQ == it->first)
		// 	{
		// 		cout << it->first << "=" << it->second << "\n";
		// 		count++;
		// 	}

		// 	// cout << it->first << " => " << it->second << "\n";
		// }

		// if (phoneBook.find(it)->second == NULL)
		// {
		// 	cout << "Not found" << "\n";
		// }

		// else if (phoneBook.find(it)->second != NULL)
		// {
		// 	cout << it << "=" << phoneBook.find(it)->second << "\n";
		// }
	// for (map<string, string>::iterator it=phoneBook.begin(); it!=phoneBook.end(); ++it)
	// {
	// 	// cout << it->first << " => " << it->second << "\n";
	// }