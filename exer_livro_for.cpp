#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    /* exercicios do livros,secao do for;
    1- D
    2 - C
    3 - D
    4 - C
    5 - C
    6 -
    7 - ;
    8 - ,
    9 - C
    10 - B
    11 - Falso, pois na omissao do j no segundo for, sempre que o primeiro for inicalizae o j = 0;
    12 - como a soma estar declarada dentro do for, ela e uma variavel local e so pode ser aletarda dentro do for.

     for(int i=0; i<10;i++){
     int soma = 0;
     soma += i*i;
     cout << soma << endl;
     }
     13 - sera um loop ifinito
     14 - cout << "\n\nIIIIIIII\n";
   for(int i = 0; i < 17; i++){
       cout << "  III\n";
   }
    cout << "IIIIIIII\n";


    14 b)for(int i =0 ; i < 2; i++){
        cout << "EEEEEE"<< endl;
        for(int j =0; j<1; j++){
            for(int w= 0;w <2;w++){
                cout << "EE"<< endl;
            }
       }
    }
    cout << "EEEEEE";

    14 -C)  for, pois e mais compacto


    15 - for(int i = 32; i<=255;i++){
        cout << "numero: " << i << " // na tabela ASCII: " << (char)i;
        cout << " //Na base hexadecimal: " << hex << i << endl;

    }

*/
      int numero;
      cout << "Digite um numero inteiro de 4 digitos; ";
      cin >> numero;
      int dgt1 = numero/1000;
      int dgt2 = (numero%1000)/100;
      int dgt3 = ((numero%1000)%100)/10;
      int dgt4 = ((numero%1000)%100)%10;
      cout << dgt4 << dgt3 << dgt2 << dgt1;
//exercicios pe
  int num,soma = 0,n1 = 0;
    cin >> num;
    float n2 = pow(6,3);
    for(int i = 1; i < 7; i++){
        for(int j =1; j < 7;j++){
            for(int w =1; w < 7;w++){
                soma = i+j+w;
                if(soma == num){
                    n1 +=1;
                    soma = 0;
                    }
                }
            }
      }
    cout << "A probabilidade de sair o " << num << " è "<< (n1/n2)*100.0 << endl;








    return 0;
}