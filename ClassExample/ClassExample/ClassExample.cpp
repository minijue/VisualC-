#include <iostream>
#include <string>
using namespace std;

class Human {
public:
// 	Human() {
// 		name = "Robot";
// 		age = 0;
// 		cout << "Constructor" << endl;
// 	}
 	
// 	Human(string inputName) {
// 		name = inputName;
// 		age = 0;
// 		cout << "Constructor with inputName" << endl;
// 	}

	Human(string inputName="Tom", unsigned int inputAge=0) {
		name = inputName;
		age = inputAge;
		cout << "Constructor with inputName and inputAge" << endl;
	}

	Human(const Human& h) {
		cout << "Copy constructor" << endl;
	}

	void introduce() {
		cout << "I'm " << name << " and I'm " << age \
			<< " years old." << endl;
	}
// 	void setName(string inputName) {
// 		name = inputName;
// 	}

	string getName() {
		return name;
	}

// 	void setAge(unsigned int inputAge) {
// 		age = inputAge;
// 	}

	unsigned int getAge() {
		if (age > 30) {
			return (age - 2);
		}
		else {
			return age;
		}
	}
	friend Human displayAge(Human a);
private:
	string name;
	unsigned int age;
};

Human displayAge(Human a) {
	cout << a.age << endl;
	return a;
}

int main() {
	Human h1("Bob");
	h1.introduce();

	displayAge(h1);
	
 	system("pause");
	return 0;
}