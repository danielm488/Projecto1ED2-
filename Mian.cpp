#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include"Header.h"
#include<fstream>
#include<string>
#include<iostream>
#include<fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;



int main()
{
	Header_info disk;
	string diskname = Consule::inicialize_format() + ".bin";
	fstream Disk(diskname,ios::in | ios::binary | ios::app);
	Disk.seekg(0, ios::beg);
	Disk.read(reinterpret_cast<char*>(&disk), sizeof(Header_info));
	do
	{
		Consule::comand_prompt(disk.namecmp);

	} while (true);

	Disk.close();
}