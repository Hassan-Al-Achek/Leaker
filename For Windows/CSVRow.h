#ifndef CSVROW_H
#define CSVROW_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CSVRow
{
public:
    CSVRow(string csvfile, string fileOut);
    string getID();
    void CsvTOJson();
    void PrintIDs();
    virtual ~CSVRow();

protected:
private:
    vector<string> out;
    int IDNumber;
    string FILEPATH;
    string FILEOUT;
    string *CSVIDs;
    void spliter(string const &str, const char delim, vector<string> &out);
    void rejoint(vector<string> out, string joined[]);
};

#endif // CSVROW_H
