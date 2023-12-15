// -----------------------------------------------------------
// Name: Sampreet Klair
// Student ID: sklair2@myseneca.ca
// Student Number: 145031225
// Date: 14th September, 2023
// Section: ZDD
// -----------------------------------------------------------

#include "Phone.h"
#include "cStrTools.h"
using namespace std;

namespace sdds {

    struct PhoneRecord {
        char name[51];
        char areaCode[4];
        char prefix[4];
        char number[5];
    };

    void displayPhoneDir(const char* programTitle, PhoneRecord records[], int recordCount) {
        cout << programTitle << " phone directory search" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;

        char searchName[51];
        while (true) {
            cout << "> ";
            cin.getline(searchName, 51);
            if (cin.fail()) {
                cin.clear();
                cin.ignore(32767, '\n');
                continue;
            }
            if (strCmp(searchName, "!") == 0) {
                cout << "Thank you for using " << programTitle << " directory." << endl;
                break;
            }
            bool found = false;
            for (int i = 0; i < recordCount; i++) {
                if (strStr(records[i].name, searchName)) {
                    cout << records[i].name << ": (" << records[i].areaCode << ") "
                         << records[i].prefix << "-" << records[i].number << endl;
                    found = true;
                }
            }
            if (!found) {
                cout << "No match found." << endl;
            }
        }
    }

    void phoneDir(const char* programTitle, const char* fileName) {
        FILE* file = fopen(fileName, "r");
        if (!file) {
            cout << fileName << " file not found!" << endl;
            cout << "Thank you for using " << programTitle << " directory." << endl;
            return;
        }

        PhoneRecord records[100];
        int recordCount = 0;

        char buffer[100];
        while (fgets(buffer, sizeof(buffer), file)) {
            sscanf(buffer, "%[^\t]\t%s\t%s\t%s", records[recordCount].name,
                   records[recordCount].areaCode, records[recordCount].prefix, records[recordCount].number);
            recordCount++;
        }

        fclose(file);

        displayPhoneDir(programTitle, records, recordCount);
    }

}