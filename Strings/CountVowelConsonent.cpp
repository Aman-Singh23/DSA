#include<iostream>
using namespace std;

int main()
{
    int countVowel = 0, countConsonent = 0;
    char S[] = "Hello my name is Aman";

    for(int i=0; S[i] != '\0'; i++) {
        if (S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U' || S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
            countVowel++;
        }
        else if((S[i]>=65 && S[i]<=90) || (S[i]>=97 && S[i]<=122)) {
            countConsonent++;
        }
    }
    cout<<"Vowel: "<<countVowel<<endl;
    cout<<"Consonent: "<<countConsonent<<endl;

    return 0;
}