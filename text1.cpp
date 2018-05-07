#include<iostream>
using namespace std;

int lenstr(char *str)
{
	int i=0;
	while(str[i]=='\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char *name;
	name="zhangsan";
	cout<<lenstr(name)<<endl;
	return 0;
}



/*
int strToInt(char *str)
{
	
}
*/
