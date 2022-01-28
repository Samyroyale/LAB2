#include<iostream>
#include<cstdlib>
using namespace std;


int comparar(int x[], int z[]);
void show(int x[]);

int comparar(int x[], int z[]) {
    int cont=0;
    int i;
    int j;
    for (j=0;j<=25;j++) {
        cont = 0;
        for (i=0;i<=199;i++) {
            if (z[j]==x[i]) {
                cont = cont+1;
            }
        }
        if (cont>=1) {
            cout << "ELEMENTO " << (char)z[j] << " SE ENCUENTRA " << cont << endl;
        }
    }
    return 0;
}

void show(int x[]) {
    int i;
    for (i=0;i<=199;i++) {
        cout << (char)x[i] << "  ";
    }
    cout << " " << endl;

}

int main() {

    int alpha[26];
    int let;
    int n;
    int vector[200];
    int x;
    alpha[0] = 'A';
    alpha[1] = 'B';
    alpha[2] = 'C';
    alpha[3] = 'D';
    alpha[4] = 'E';
    alpha[5] = 'F';
    alpha[6] = 'G';
    alpha[7] = 'H';
    alpha[8] = 'I';
    alpha[9] = 'J';
    alpha[10] = 'K';
    alpha[11] = 'L';
    alpha[12] = 'M';
    alpha[13] = 'N';
    alpha[14] = 'O';
    alpha[15] = 'P';
    alpha[16] = 'Q';
    alpha[17] = 'R';
    alpha[18] = 'S';
    alpha[19] = 'T';
    alpha[20] = 'U';
    alpha[21] = 'V';
    alpha[22] = 'W';
    alpha[23] = 'X';
    alpha[24] = 'Y';
    alpha[25] = 'Z';
    n = 200;
    for (x=0;x<=n-1;x++) {
        let = alpha[(rand()%26)];
        vector[x] =let;
    }
    show(vector);
    comparar(vector,alpha);
    return 0;
}
