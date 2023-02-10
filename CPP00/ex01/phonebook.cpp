#include <iostream>
using std::string;

class Contact
{
	public:
		string FirstName;
		string LastName;
		string Nickname;
		string PhoneNumber;
		string DarkestSecret;	
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
				contacts[i].FirstName = "";
				contacts[i].LastName = "";
				contacts[i].Nickname = "";
				contacts[i].PhoneNumber = "";
				contacts[i].DarkestSecret = "";
			}
		}
};

int main()
{
	PhoneBook phonebook;
	phonebook.contacts
}
