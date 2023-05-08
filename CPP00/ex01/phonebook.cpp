#include "phonebook.hpp"

int main()
{
	string userinput;
	int	curinput = 0;

	PhoneBook phonebook;
	while (true)
	{
		cin >> userinput;
		if (userinput == "ADD")
		{
			ADD add;
			phonebook.contacts[curinput].FirstName = add.fname;
			phonebook.contacts[curinput].LastName = add.lname;
			phonebook.contacts[curinput].Nickname = add.nname;
			phonebook.contacts[curinput].PhoneNumber = add.pnumber;
			phonebook.contacts[curinput].DarkestSecret = add.dsecret;
			if (curinput == 7)
				curinput = 0;
			else
				curinput++;	
		}
		else if (userinput == "SEARCH")
		{
			SEARCH search(phonebook);
			
		}
		else if (userinput == "EXIT")
		{
			return 0;
		}
	}
}
