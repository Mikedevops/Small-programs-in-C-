#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

bool checkPalindrome(std::string inputString) {
    string rev;
    rev= inputString;
    //bool ans;
    reverse (inputString.begin(),inputString.end());
    if(inputString.compare(rev) != 0){
        
        cout<<"false\n";
        return false;
        
    }
    else{
        cout<<"true\n";
        return true;
    }
}
int main()
{
    string str1;
    //string rev;
    cout<<"input a str:\n";
    cin>>str1;
    checkPalindrome(str1);
    
    return 0;
}



