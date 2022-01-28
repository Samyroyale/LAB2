#include <iostream>
#include <stack>

using namespace std;


void string_permutation(long long int n, string str)
{

    stack<int> s;
    string result;


    n = n - 1;


    for (int i = 1; i < str.size() + 1; i++) {
        s.push(n % i);
        n = n / i;
    }


    for (int i = 0; i < str.size(); i++) {
        int a = s.top();
        result += str[a];
        int j;


        for (j = a; j < str.length(); j++)
            str[j] = str[j + 1];
        str[j + 1] = '\0';
        s.pop();
    }


    cout << result << endl;
}


int main()
{
    string str = "0123456789";
    long long int n;
    cout<<"INGRESE LA N-ESIMA PERMUTACION QUE DESEA SABER ";
    cin>>n;

    string_permutation(n, str);
    return 0;
}

