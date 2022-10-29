#include <iostream>

using namespace std;

int main(){
	string crc,decoded_msg;
	cout << "Enter message: ";
	getline(cin, decoded_msg);
	cout << "Enter key: ";
	getline(cin,crc);
	for (int i = 0; i <= decoded_msg.length() - crc.length(); ) {
    	for (int j = 0; j < crc.length(); j++) {
        	decoded_msg[i+j] = decoded_msg[i+j] == crc[j] ? '0':'1';
    	    for (;i<decoded_msg.length() && decoded_msg[i]!='1';i++);
    	}
	}			
	for (char i : decoded_msg.substr(decoded_msg.length()-crc.length() ) ) {
		if(i!='0')
		cout <<"Error detected ....";
		return 0;
	}
	cout <<"No error!";
	return 0;
}
