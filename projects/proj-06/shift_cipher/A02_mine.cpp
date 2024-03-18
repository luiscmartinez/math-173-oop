// Name: Soumya Singh
// SSID: 1927538
// Assignment #: 2
// Submission Date: 3/10/2024
//
// Description: A program to encrypt and decrypt a message using a shift cipher
// The plaintext message must only contain lowercase alpha, digits 0-9 and ?,]
//
// command line arguments
// -p theplaintextmessage1 - the plaintext (p) message to be encrypted
// -c PDALH7EJPATPIAOO7CA? - the cipher (c) text to be decrypted
// -k 9 - the key (k) shift value
// -e - the option to encrypt (e)
// -d - the option to decrypt (d)
//
#include <iostream> //std::cout, std::cin, etc.
#include <cstdlib>	//C++ version of stdlib.h
#include <cstring>	//C++ version of string.h
#include <string>	//C++ string library
// todo: add other includes you may need
// Command line args reference:
// https://docs.microsoft.com/en-us/cpp/cpp/main-function-command-line-args?view=vs-2019
#define CBL 64
char codebook[81] = {'z', 'Z', 'y', 'Y', 'x', 'X', 'w', 'W', 'v', 'V', 'u', 'U', 't', 'T', 's', 'S',
					 'r', 'R', 'q', 'Q', 'p', 'P', 'o', 'O', 'n', 'N', 'm', 'M', 'l', 'L', 'k', 'K',
					 'j', 'J', 'i', 'I', 'h', 'H', 'g', 'G', 'f', 'F', 'e', 'E', 'd', 'D', 'c', 'C',
					 'b', 'B', 'a', 'A', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '?', ']'};

int main(int argc, char *argv[])
{
	// Insufficient arguments, exit program
	if (argc < 6)
	{
		std::cerr << "Error: Insufficient arguments.\n";
		return -1;
	}
	// Example variable declaration
	std::string msg;	  // string to store argv[msg_index]
	int k = 0;			  // shift amount
	bool encrypt = false; // perform encryption set to true
	bool decrypt = false; // perform decryption set to true
	// Example command line argument processing using a loop
	for (int i = 1; i < argc; i++)
	{
		// std::cout << std::strcmp(argv[i], "-p") << "when i is " << i << std::endl;

		// use strcmp to compare command line switches to argv[i]
		// A2 todo: process -c -e -d and k command line switches
		if (std::strcmp(argv[i], "-p") == 0)
			msg = argv[++i]; // store the plaintext in string msg
		if (std::strcmp(argv[i], "-c") == 0)
			msg = argv[++i];
		if (std::strcmp(argv[i], "-e") == 0)
			encrypt = true;
		if (std::strcmp(argv[i], "-d") == 0)
			decrypt = true;
		if (std::strcmp(argv[i], "-k") == 0)
			k = atoi(argv[++i]);
	}
	// A2 todo: -E encrypt the plaintext with key value k
	// use a nested loop to search and replace plaintext with shifted text
	// ....your code goes here
	if (encrypt)
	{
		for (int i = 0; i < msg.size(); i++)
		{
			for (int j = 0; j < CBL; j++)
			{
				if (msg[i] == codebook[j])
				{
					msg[i] = codebook[(j + k) % CBL];
				}
				break;
			}
		}
	}
	// A2 todo: -D decrypt the ciphertext -c with key value k
	if (decrypt)
	{
		// use a nested loop to search and replace ciphertext with plaintext
		// ....your code goes here
		{
			for (int i = 0; i < msg.size(); i++)
			{
				for (int j = 0; j < CBL; j++)
				{
					if (msg[i] == codebook[j])
					{
						if ((i - k) >= 0)
							msg[i] = codebook[(j - k) % CBL];
						if ((i - k) < 0)
							msg[i] = codebook[(((j - k) % CBL) + CBL) % CBL];
					}
					break;
				}
			}
		}
	}
	// print out the ciphertext or plaintext using standard-out
	std::cout << msg << std::endl;
	return 0;
} // main
