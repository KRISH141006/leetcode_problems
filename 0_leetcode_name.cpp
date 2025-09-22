#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string trim(string &s) {
    while (!s.empty() && s.back() == ' ') {  
        s.pop_back();                        
    }
    return s;
}

string formatFileName(const string &str) {
    string name = "";
    for (char c : str) {
        if (c == ' ')
            name += '_';
        else if (c == '.')
            continue;
        else
            name += c;
    }
    return name + ".cpp";
}

int main() {
    string str, funcName;
    cout << "Enter the title of the problem and function name :" << endl;
    getline(cin, str);        
    getline(cin, funcName);   
    str = trim(str);  
    funcName = trim(funcName);

    string filename = formatFileName(str);

    string fullPath = "E:\\d_drive\\sem_3\\dscpp\\leetcode\\" + filename;

    ofstream fout(fullPath);
    if (fout.is_open()) {
        fout << "#include <bits/stdc++.h>\n";
        fout << "using namespace std;\n\n";
        fout << "class Solution {\n";
        fout << "public:\n";
        fout << "    " << funcName << " {\n";
        fout << "        \n";
        fout << "    }\n";
        fout << "};\n\n";
        fout << "int main() {\n";
        fout << "    Solution s;\n";
        fout << "    \n";
        fout << "    return 0;\n";
        fout << "}\n";
        fout.close();
    }

    cout << "Created: " << fullPath << endl;

    string folderPath = "E:\\d_drive\\sem_3\\dscpp";
    string command = "code -r \"" + folderPath + "\" \"" + fullPath + "\"";
    system(command.c_str());


    return 0;
}
