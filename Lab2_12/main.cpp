#include<iostream>
using namespace std;

int arr[50][50], dimension;
bool repetido(int num, int i);
int isMagicSquare(int matrix[50][50], int n, int m);
int vector[50]={};


int main() {
    int tam,num,dimen;
    cout<<"INGRESE LA DIMENSION DE LA MATRIZ "<<endl;
    cin>>dimen;
    tam=dimen*dimen;

    for (int i=0; i<tam; i++){
       cout<<"INGRESE EL NUMERO "<<endl;
       cin>>num;

       while(repetido(num,i)){
           cout<<"ES UN NUMERO REPETIDO "<<endl;
           cout<<"INGRESAR OTRO NUMERO "<<endl;
           cin>>num;
       }
       vector[i]=num;
   }


    int cont=0;
    for (int i=0;i<dimen;i++){
        for(int j=0;j<dimen;j++){

            arr[i][j]=vector[cont];
            cont=cont+1;
        }
    }
    cout<<" "<<endl;
    cout<<"LA MATRIZ INGRESADA ES "<<endl;
    for (int i=0;i<dimen;i++){
        for (int j=0;j<dimen;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    if (isMagicSquare(arr, dimen, dimen))
        cout << "LA MATRIZ INGRESADA ES MAGICA ";
    else
        cout << "LA MATRIZ INGRESADA NO ES MAGICA ";

   return 0;
}

bool repetido(int num, int i){
    for (int x=0; x<i;x++){
        if(num==vector[x]){
            return true;
        }
    }
    return false;
}

int isMagicSquare(int matrix[50][50], int n, int m){
    int sum1 = 0, sum2=0;

    for (int i = 0; i < n; i++)
        sum1 = sum1 + matrix[i][i];

    for (int i = 0; i < n; i++)
        sum2 = sum2 + matrix[i][n - 1 - i];


    if(sum1 != sum2)
        return 0;


    for (int i = 0; i < n; i++){

        int rowSum = 0;
        for (int j = 0; j < m; j++)
            rowSum = rowSum + matrix[i][j];


        if (rowSum != sum1)
            return 0;
    }


    for (int i = 0; i < n; i++){

        int columnSum = 0;
        for (int j = 0; j < n; j++)
            columnSum += matrix[j][i];


        if (columnSum != sum1)
            return 1;
    }

    return true;
}
