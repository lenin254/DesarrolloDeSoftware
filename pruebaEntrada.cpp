#include <iostream>

using namespace std;


int main() {
    int n_1; //cantidad de plataformas
    
    cout << "Ingrese la cantidad de plataformas: "<< endl;
    cin >> n_1;
    int n_2[n_1][3];
    for (int i=0 ; i < n_1 ; i++ )
    {
        //cout << "i="<<i <<" n_1=" << n_1 <<endl;
        cout <<"Para la plataforma " << i+1 <<endl;
        cout <<"Ingrese su altitud: ";
        cin >> n_2[i][0];
        cout <<"ingrese su primera coordenad horizontal:";
        cin >> n_2[i][1];
        cout <<"ingrese su segunda coordenad horizontal:";
        cin >> n_2[i][2];
    }
    
    cout << "Su ingreso es :"<<endl;
    cout << <<endl;
    for (int i = 0; i < n_1 ; i++)
    {
        for (int j =0; j < 3 ; j++)
        {
            cout << n_2[i][j];
        }
        cout <<endl;
    }
    
    int l = 0; //la longitud total de todos lo pilares
    bool bool_1 = false; // indidcador de comparacion
    int l_aux; //longitud auxiliar
    cout <<"########################"<<endl;
    for (int i = 0; i < n_1 ; i++)
    {
        for (int j =1; j < 3 ; j++)
        {
            
            //cout << "\nPara el pilar "<<i +1<< " su coordenada horizontal :"<<n_2[i][j]<<endl;
            
            for (int a = 0; a < n_1 ; a++)
            {
                if (i != a && n_2[i][0] > n_2[a][0] )
                {
                    //cout <<n_2[a][1] <<"|" <<n_2[a][2] << endl;
                    if (n_2[i][j] > n_2[a][1] && n_2[i][j] < n_2[a][2] )
                    {
                        //cout<< "si esta encima";
                        bool_1 = true;
                        l_aux = n_2[i][0]-n_2[a][0];
                    }
                    else
                    {
                        //cout << "no esta encima";
                    }
                }
                
            //cout <<endl;
            }
            if (bool_1)
            {
                l += l_aux;
                //cout <<"\n sumando "<<l_aux <<endl;
            }
            else
            {
                l += n_2[i][0];
                //cout << "\nsumando " << n_2[i][0];
            }
            
        }
        //cout <<endl;
    }
    cout << "La longitud total de todos los pilares es : "<< l << endl;

    return 0;
}