#include<iostream>

using namespace std;

int main(){
    char c;
    int isLowercareVowel, isUppercaseVowel;
    cout<<"enter the alphabet";

    cin>>c;

    isLowercareVowel = (c=='a'||c=='e'|| c=='i'||c=='o'||c=='u');
    
    isUppercaseVowel =(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(isLowercareVowel|| isUppercaseVowel)

    cout<<c<<"is a vowel";
    else
    cout<<c<<"is a consonant";

    return 0;
}