#include <iostream>
#include <iterator>
#include <map>
#include <string>
using namespace std;

map<std::string, void*> api_dl_handle_map;

int (*fn)(int, int);

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int prod(int a, int b)
{
	return a*b;
}

int main(void)
{
	std::map<std::string, void*>::iterator it = api_dl_handle_map.begin();
	fn = &add;
void *var;
	cout<<fn(1,2)<<endl;
	api_dl_handle_map["add"] = (void *)fn;
	fn = &sub;
	api_dl_handle_map["sub"] = (void *)fn;
	fn = &prod;
	api_dl_handle_map["prod"] = (void *)fn;
	fn = (void *)api_dl_handle_map("add");
	return 0;
}
