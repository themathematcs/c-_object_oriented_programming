#include <iostream>

using std::string;

class Employee {
public:
	string name;
	string company;
	int age;

	void introduce()
{
	std::cout<<"name -"<< name <<std::endl;
	std::cout<<"company -"<< company <<std::endl;
	std::cout<<"age -"<< age <<std::endl;
}
};
int main()
{
	Employee employee1;
	employee1.name = "chriz";
	employee1.company = "misrosoft";
	employee1.age = 20;
	employee1.introduce();

	

return (0);
}