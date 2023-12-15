#ifndef SDDS_CSTRTOOLS_H // replace with relevant names
#define SDDS_CSTRTOOLS_H
namespace sdds {
	char toLower(char ch);

	int strCmp(const char* s1, const char* s2); // compares s1 and s2 cStrings and returns:

	int strnCmp(const char* s1, const char* s2, int len); // compares s1 and s2 cStrings upto len characters and returns:

	void strCpy(char* des, const char* src); // copies src to des

	int strLen(const char* str);  // returns the length of str

	const char* strStr(const char* str, const char* find); // if "find" is found in "str" it will return the addres of the match // if not found it will returns nullptr (zero)

	int isAlpha(char ch); // returns true if ch is alphabetical

	int isSpace(char ch); // returns true if ch is a whitespace character

	void trim(char word[]); // removes the non-alphabetic characters from the begining and end of a word

	void toLowerCaseAndCopy(char des[], const char source[]); // copies the  lower case version of the source into des.
}
#endif