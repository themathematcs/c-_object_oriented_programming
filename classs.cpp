#include <iostream>

using std::string;

//class 
class Employee {
public:
	//class atrributes
	string name;
	string company;
	int age;
//class method/ function
	void introduce()
{
	std::cout<<"name -"<< name <<std::endl;
	std::cout<<"company -"<< company <<std::endl;
	std::cout<<"age -"<< age <<std::endl;
}
};
int main()
{
	//object of our class 
	Employee employee1;
	employee1.name = "chriz";
	employee1.company = "misrosoft";
	employee1.age = 20;
	//calling our class method
	employee1.introduce();

	

return (0);
}
