#include <iostream>
#include <string>
// #include <cstring>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"nopqZAabchFGHBCDdefgEIOPQJKLMrstTUVWXYuvwxyzijklmNRS"};

    string message{};

    cout << "Enter your secret message:";
    getline(cin, message);

    string encrypted_message{};

    cout <<"\n";
    cout <<"Encrypted Message"<<endl;

    for(char c: message){
        size_t position = alphabet.find(c);
        if(position != string::npos){
            char new_char {key.at(position)};
            encrypted_message += new_char;
        }
        else{
            encrypted_message += c;
        }
    }
    cout <<"\n";
    cout <<encrypted_message<<endl;

    string decrypt_message{};

    cout <<"\n";
    cout <<"Decoded message"<<endl;

    for(char d: encrypted_message){
        size_t position {key.find(d)};
        if(position != string::npos){
            char new_char {alphabet.at(position)};
            decrypt_message += new_char;
        }
        else{
            decrypt_message += d;
        }

    }
    cout <<"\n";
    cout <<decrypt_message<<endl;

}
