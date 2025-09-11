#include<iostream>
using namespace std;

string append2(string &str){
    
}

int main(){
    
    string str = "Hello!!, world";
    string str2 = "Krish Sondagar";

// Add string at back

    // str.append(' ' + str2);
    // str = str + " Krish";

    // cout<<str<<endl;


// Add string at front

    // str = "Sondagar";
    // str2 = "Krish ";
    
    // int fromIndex = 0;
    // for(int i=fromIndex,k=0;i<str2.length()+fromIndex;i++,k++){
    //     str = str + ' ';
    //     for(int j=str.length();j>i;j--){
    //         str[j] = str[j-1];
    //     }
    //     str[i] = str2[k];
    // }
    // cout<<str<<endl;

// length of a string 

    // str = "Sondagar";
    // str2 = "Krish";

    // int length1 = str.length();
    // int length2 = 0;
    // for(int i=0;str[i]!='\0';i++){
    //     length2++;
    // }
    // cout<<"length1  is : " + to_string(length1) + " \nlength2 is : " + to_string(length2) <<endl;

// erase a character from any index and reduce length by 1

    // str.erase(str.begin());

    int index = 0;

    for(int i=index;i<str.length();i++){
        str[i] = str[i+1];
    }

    // str[str.length()-1]='\0';

    cout<<str;
   
    return 0;
}