using namespace std;
#include<iostream>

#define N 5

void print(int arr[N][N])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
            cout << arr[i][j] << " ";

        cout << '\n';
    }
}

void rotate(int arr[N][N])
{


    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }


    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N / 2; ++j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][N - j - 1];
            arr[i][N - j - 1] = temp;
        }
    }
}


int main()
{

    int arr[N][N];
    int cont=1;
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=cont;
            cont=cont+1;
        }
    }

    cout<<"ORIGINAL"<<endl;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<"90 GRADOS"<<endl;
    rotate(arr);
    print(arr);

    cout<<"\n";
    cout<<"180 GRADOS"<<endl;
    rotate(arr);
    print(arr);

    cout<<"\n";
    cout<<"270 GRADOS"<<endl;
    rotate(arr);
    print(arr);



    return 0;
}
