#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::to_string;
using std::stoi;
using std::isdigit;

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

class Add
{
	public:
		string fname;
		string lname;
		string nname;
		string pnumber;
		string dsecret;
		Add()
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
			cin.ignore();
			getline(cin, dsecret);
			cout << "\n";
		}
};

class Search
{
	public:
		string fnameedit;
		string lnameedit;
		string nnameedit;
		string userinput;
		int temp;
		Search(){};
		Search(PhoneBook phonebook)
		{
			userinput = "";
			cout << "|     Index|First Name| Last Name|  Nickname|\n";
			for (int i = 0; i < 8; i++)
			{
				fnameedit = "";
				lnameedit = "";
				nnameedit = "";
				if (phonebook.contacts[i].FirstName != "")
				{
					temp = phonebook.contacts[i].FirstName.length();
					if (temp < 10)
					{
						for (int i = 0; i < 10 - temp; i++)
							fnameedit += " ";
						fnameedit += phonebook.contacts[i].FirstName;
					}
					else if (temp > 10)
					{
						fnameedit = phonebook.contacts[i].FirstName;
						fnameedit.erase(9, temp - 9);
						fnameedit += ".";
					}
					else
						fnameedit = phonebook.contacts[i].FirstName;

					temp = phonebook.contacts[i].LastName.length();

					if (temp < 10)
					{
						for (int i = 0; i < 10 - temp; i++)
							lnameedit += " ";
						lnameedit += phonebook.contacts[i].LastName;
					}
					else if (temp > 10)
					{
						lnameedit = phonebook.contacts[i].LastName;
						lnameedit.erase(9, temp - 9);
						lnameedit += ".";
					}
					else
						lnameedit = phonebook.contacts[i].LastName;

					temp = phonebook.contacts[i].Nickname.length();

					if (temp < 10)
					{
						for (int i = 0; i < 10 - temp; i++)
							nnameedit += " ";
						nnameedit += phonebook.contacts[i].Nickname;
					}
					else if (temp > 10)
					{
						nnameedit = phonebook.contacts[i].Nickname;
						nnameedit.erase(9, temp - 9);
						nnameedit += ".";
					}
					else
						nnameedit = phonebook.contacts[i].Nickname;

					cout << "|         " + to_string(i) + "|" + fnameedit + "|" + lnameedit + "|" + nnameedit + "|";
					cout << "\n";
				}
			}
			cin >> userinput;
			int iuserinput = -1;
			try
			{
				iuserinput = stoi(userinput);
			}
			catch(...)
			{
			}
			if ((iuserinput >= 0) && (iuserinput <= 7) && (phonebook.contacts[iuserinput].FirstName != ""))
			{
				cout << "First name: " + phonebook.contacts[iuserinput].FirstName;
				cout << "\nLast name: " + phonebook.contacts[iuserinput].LastName;
				cout << "\nNick name: " + phonebook.contacts[iuserinput].Nickname;
				cout << "\nPhone number: " + phonebook.contacts[iuserinput].PhoneNumber;
				cout << "\nDarkest secret: " + phonebook.contacts[iuserinput].DarkestSecret;
				cout << "\n";
			}
			else
				cout << "Index out of range or wrong, type available number displayed in index list above.\n";
		}
};

#endif