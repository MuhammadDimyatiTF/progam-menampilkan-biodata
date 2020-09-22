#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string npm;
	string alamat;
	string jurusan;
	string universitas;
	
	cout<<"Masukan Biodata Anda : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama); 
	
	cout<<"NPM     : ";
	getline (cin, npm); 
	 
	cout<<"Alamat  : ";
	getline (cin, alamat); 
	  
	cout<<"Jurusan : ";
	getline (cin, jurusan); 
	
	cout<<"Universitas : ";
	getline (cin, jurusan);
	
	cout<<endl;
	cout<<"BIODATA :"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama    : "<<nama<<endl;
	cout<<"NPM     : "<<npm<<endl;
	cout<<"Alamat  : "<<alamat<<endl;
	cout<<"Jurusan : "<<jurusan<<endl;
	cout<<"Universitas : "<<universitas<<endl;
	
	return 0;
}
