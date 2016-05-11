#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
	map<string, int> mm;
	mm["zhang3"]=19;
	mm.insert(make_pair("li4", 28));
	mm.insert(pair<string, int>("wang2", 27));
	mm.insert(map<string, int>::value_type("zhao4", 33));

	mm.erase("zhang3");
	map<string,int>::iterator it = mm.find("zhang3");
	if (it != mm.end())
		cout << it->first << "'s age is " << it->second << endl;
// 	if (mm.find("zhang3") != mm.end())
// 		cout << "zhang3's age is " << mm["zhang3"] << endl;
	else
		cout << "zhang3 isn't my student." << endl;

	system("pause");
	return 0;
}