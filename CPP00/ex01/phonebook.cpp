#include <iostream>
using std::string;
using std::cout;
using std::cin;

class Contact
{
	public:
		string FirstName;
		string LastName;
		string Nickname;
		string PhoneNumber;
		string DarkestSecret;	
		Contact()
        {
            FirstName = "";
            LastName = "";
            Nickname = "";
            PhoneNumber = "";
            DarkestSecret = "";
        }
        Contact(string firstName, string lastName, string nickname, string phoneNumber, string darkestSecret)
        {
            FirstName = firstName;
            LastName = lastName;
            Nickname = nickname;
            PhoneNumber = phoneNumber;
            DarkestSecret = darkestSecret;
        }
};

class PhoneBook 
{
	public:
		Contact *contacts;
		PhoneBook() 
		{
			contacts = new Contact[8];
			for (int i = 0; i < 8; i++)
			{
				contacts[i] = Contact();
			}
		}
};

class ADD
{
	public:
		string fname;
		string lname;
		string nname;
		string pnumber;
		string dsecret;
		ADD()
		{
			cout << "First name: ";
			cin >> fname;
			cout << "\nLast name: ";
			cin >> lname;
			cout << "\nNick name: ";
			cin >> nname;
			cout << "\nPhone number: ";
			cin >> pnumber;
			cout << "\nDarkest secret: ";
			cin >> dsecret;
			cout << "\n";
		}
};

class SEARCH
{
	public:
		string fnameedit;
		string lnameedit;
		string nnameedit;
		string pnumberedit;
		SEARCH(){};
		SEARCH(PhoneBook phonebook)
		{
			for (int i = 0; i < 7; i++)
			{
				fnameedit = phonebook.contacts[0].FirstName
				cout << "|" + phonebook.contacts[0].FirstName + "|" + phonebook.contacts[0].LastName + "|" + phonebook.contacts[0].Nickname + "|" + phonebook.contacts[0].PhoneNumber + "|";
			}
		}
};

int main()
{
	string userinput;
	int	curinput = 0;

	PhoneBook phonebook;
	//phonebook.contacts;
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
