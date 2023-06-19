#include <iostream>#include <iostream>

using namespace std;

int main()
{
    int dia,mes,ano,j=0, m=0, diasmes = 1;
    cin >> dia >> mes >> ano;

    for(int i = 1; i <= ano; i++){
        int div1 = i%4;
        int div2 = i%100;
        int div3 = i%400;
        if(div1== 0 && (div2 !=0 || div3==0)){
            j +=1;
        }
    }

    int div1 = ano%4;
    int div2 = ano%100;
    int div3 = ano%400;


    if(div1== 0 && (div2 !=0 || div3==0)){
        if(mes >= 3 && mes < 5){
            m = 59;
            diasmes = (mes-3)* 31 + m;
    }   else if(mes < 3){
            diasmes = (mes-1)*31;
    }   else if(mes >=5 && mes < 7){
            m = 120;
            diasmes = ((mes-5)*31)+m;
    }   else if(mes >=7 && mes < 9){
            m = 181;
            diasmes = ((mes-7)*31)+m;
    }   else if (mes >=9 && mes < 12){
            m = 273;
            diasmes = ((mes-9)*31)+m;
    }   else{
            m = 334;
            diasmes = ((mes-12)*31)+m;
    }
    }else{
        if(mes >= 3 && mes < 5){
            m = 59;
            diasmes = ((mes-3)*31)+m;

    }   else if(mes < 3){
            diasmes = (mes-1)*31;

    }   else if(mes >=5 && mes < 7){
            m = 120;
            diasmes = ((mes-5)*31)+m;

    }   else if(mes >=7 && mes < 9){
            m = 181;
            diasmes = ((mes-7)*31)+m;

    }   else if (mes >=9 && mes < 12){
            m = 273;
            diasmes = ((mes-9)*31)+m;

    }   else{
            m = 334;
            diasmes = ((mes-12)*31)+m;
    }

    }
    int total = dia + diasmes + (ano-1) + (j-1);

    switch(total%7){
        case 0:
        cout << "Segunda-feira";
        break;
        case 1:
        cout << "Terça-feira";
        break;
        case 2:
        cout << "Quarta-feira";
        break;
        case 3:
        cout << "Quinta-feira";
        break;
        case 4:
        cout << "Sexta-feira";
        break;
        case 5:
        cout << "Sabado";
        break;
        case 6:
        cout << "Domingo";reak;
    }
        break;
    }


    return 0;
}
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


#include <iostream>

using namespace std;

int main()
{
    int n,r;
    float fatorialn = 1,fatorialr = 1, fatorialnr = 1;
    cin >> n >> r;
    for(int i = 1; i <= n;i++){
        fatorialn = fatorialn * i;
    }
     for(int j = 1;j <= r;j++){
        fatorialr = fatorialr * j;
    }
    for(int k = 1; k <= (n-r);k++){
        fatorialnr = fatorialnr * k;
    }
    cout << fatorialn << "  " << fatorialr << "    " << fatorialnr << endl;

    float combinacao = fatorialn/(fatorialr * fatorialnr);
    cout << combinacao;

    return 0;
}
    
    
    
    
    
    #include <iostream>

using namespace std;

int main()
{
    int dia,mes,ano,j=0, m=0, diasmes = 1;
    cin >> dia >> mes >> ano;
 // contagem dos anos bissextos;
    for(int i = 1; i < ano; i++){
        int div1 = i%4;
        int div2 = i%100;
        int div3 = i%400;
        if(div1== 0 && (div2 !=0 || div3==0)){
            j +=1;
        }
    }

    int div1 = ano%4;
    int div2 = ano%100;
    int div3 = ano%400;

//ano bissexto
    if(div1== 0 && (div2 !=0 || div3==0)){
        if(mes >= 3 && mes < 5){
            m = 60;
            diasmes = (mes-3)* 31 + m;
    }   else if(mes < 3){
            diasmes = (mes-1)*31;
    }   else if(mes >=5 && mes < 7){
            m = 121;
            diasmes = ((mes-5)*31)+m;
    }   else if(mes >=7 && mes < 9){
            m = 182;
            diasmes = ((mes-7)*31)+m;
    }   else if (mes >=9 && mes < 12){
            m = 274;
            diasmes = ((mes-9)*31)+m;
    }   else{
            m = 335;
            diasmes = ((mes-12)*31)+m;
    }
      //ano nao bissexto
    }else{
        if(mes >= 3 && mes < 5){
            m = 59;
            diasmes = ((mes-3)*31)+m;

    }   else if(mes < 3){
            diasmes = (mes-1)*31;

    }   else if(mes >=5 && mes < 7){
            m = 120;
            diasmes = ((mes-5)*31)+m;

    }   else if(mes >=7 && mes < 9){
            m = 181;
            diasmes = ((mes-7)*31)+m;

    }   else if (mes >=9 && mes < 12){
            m = 273;
            diasmes = ((mes-9)*31)+m;

    }   else{
            m = 334;
            diasmes = ((mes-12)*31)+m;
    }

    }
    int total = dia + diasmes + (ano-1) + (j-1);

    switch(total%7){
        case 0:
        cout << "Segunda-feira";
        break;
        case 1:
        cout << "Terca-feira";
        break;
        case 2:
        cout << "Quarta-feira";
        break;
        case 3:
        cout << "Quinta-feira";
        break;
        case 4:
        cout << "Sexta-feira";
        break;
        case 5:
        cout << "Sabado";
        break;
        case 6:
        cout << "Domingo";
        break;
    }


    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
   #include <iostream>
#iclude
using namespace std;

int main()
{
    int numero,div = 0,cont = 0;
    int div2 = 0, resto = 0, numero_inverso = 0;
    cin >> numero;
    int x = numero;
    do{
        div = numero/10;
        numero = div;
        cont +=1;
    }while(div >= 1);

    for(int i = cont; i > 0 ; i--){
        cout << x << " o numero x"<< endl;
        resto = x%10;
        div2 = x/10;
        x = div2;
        cout << numero_inverso << " o numero inverso"<< endl;
        numero_inverso = i * 10;

        cout << i << " o i"<< endl;
        cout << resto << " o resto"<< endl;
        cout << div2 << " o div2"<< endl;
        cout << numero_inverso << " o numero inverso"<< endl;
    }







    /*
    int numero,div = 0,div2 = 0;
    cin >> numero;
    do{
        div = numero/10;
        div2 = numero%10;
        numero = div;
        cout << div2;
    }while(div >= 1);

    carlos eduardo
    carlos
    carlos eduardo
    carlos
    carlos eduardo
    carlos
    vcarlos eduardo
    carlos
    carlos eduardo
    carlos
    carlos eduardo
    carlos
    v
    carlos eduardo
    carlos
    carlos eduardo
    carlos
*/

    
    
    questao 03// lista matrizes
    #include <iostream>

using namespace std;

int main()
{
    int l,c;
    cin >> l >> c;
    int ponto;
    int l_p,c_p;
    int A[l][c];
    for(int i = 0; i < l; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    for(int i = 0; i < l; i++){
        int aux = A[i][0];
        int aux2;
        for(int j = 1; j < c; j++){
            if( aux > A[i][j]);{
                aux = A[i][j];
                aux2 = j;
                }
        }
        for(int w = 0; w < c; w++ )
            if( aux > A[w][aux2] ){
                ponto = aux;
                l_p = w;
                c_p = i;
                }

    }
    cout << ponto << endl;
    cout << l_p << endl;
    cout << c_p;
    return 0;
}
    
 
    
    
    
  MULTIPLICAÇÃO DE MATRIZES PYTHON
      
def lerMatriz():
    linhas = int(input('numero de linhas'))
    colunas = int(input('numero de colunas'))
    matriz = []
    for i in range(linhas):
        linha = []
        for j in range(colunas):
            linha.append(int(input()))
        matriz.append(linha)
    return matriz
        
def criarMatriz(linhas , colunas, valor):
    matriz = []
    for i in range(linhas):
        linha = []
        for j in range(colunas):
            linha.append(valor)
        matriz.append(linha)       
    return matriz

                  
def imprimirMatriz(M):
    for i in range(len(M)):
        for j in range(len(M[0])):
            print(M[i][j], end=" ")
        print()

def multiplicarMatriz(M1 , M2):
    matrizResultante = []
    for i in range(len(M1)):
        linha = []
        for j in range(len(M2[0])):
            elemento = 0
            for k in range(len(M1[0])):
                elemento += M1[i][k] * M2[k][j]
            linha.append(elemento)
        matrizResultante.append(linha)
    
    return matrizResultante

    
    
    
    
#Tentativa para fazer progama que escalone a matriz pelo metodo de gauss-jordan


matriz = []
n_sistema = int(input('Digite quantos sistemas serão introduzidos: '))
for i in range(n_sistema):
    vetores = []
    tamanho = int(input('tamanho do vetor: '))
    for vetor in range(tamanho):
        elemento = int(input('Elemento do vetor : '))
        vetores.append(elemento)
    matriz.append(vetores)
    
for i in range(len(matriz)):
    aux = matriz[i][i]
    for j in range(len(vetores)):
        matriz[i][j] = matriz[i][j]/aux
        
        
print(matriz)

    
    
    
    
            
            
            
   VETOR INTERSESÇAO C++
   #include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int V1[m];
    int V2[n];
    int w;
    if( m > n)
        w = n;
    else
        w = m;
    int V3[w];
    int cont = 0;
    for(int i = 0; i < m; i++)
        cin >> V1[i];
    for(int i = 0; i < n; i++)
        cin >> V2[i];

    for(int i = 0; i < w; i++)
        for(int j = 0; j < w; j++)
            if( V1[i] == V2[j])
            {
             V3[cont] = V1[i];
             cont++;
            }



    for(int i = 0; i < cont; i++)
        for(int j = i + 1; j < cont; j++)
            if( V3[i] == V3[j])
            {
             int aux = V3[cont-1];
             V3[cont-1] = V3[i];
             V3[i] = aux;
             cont--;
            }

    for(int i = 0; i < cont-1; i++)
        for(int j = i+1; j < cont; j++)
            if( V3[i] > V3[j])
            {
                int aux = V3[j];
                V3[j] = V3[i];
                V3[i] = aux;
            }

    for(int i = 0; i < cont; i++)
        cout << V3[i] << " ";
    return 0;
}
    
    
    
    
    
    QUADRADO MAGICO
     #include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int M[n][n];
    bool flag =  false;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> M[i][j];
    for(int i = 0; i < n; i++)
    {   int somal = 0,somac = 0,somadp= 0,somads = 0;
        int aux = 0;
        int aux2 = (n-1);
        for(int j = 0; j < n; j++)
        {
         somal += M[i][j];
         somac += M[j][i];
         somadp += M[j][j];
         somads = somads + M[aux2][aux];
         aux2--;
         aux++;

        }
    if( somal == somac && somac == somadp && somadp == somads )
        flag = true;
    else
    {
        flag = false;
        break;
    }

    }

    if(flag)
        cout << " Quadrado mágico";
    else
        cout << "nop";

    return 0;
}

    #include <iostream>
#include <cstring>
using namespace std;
void lerString( char str[], int tamMaximo)
{
    if(cin.peek() == '\n')
        cin.ignore();
    cin.getline(str, tamMaximo);
}
void strmaius ( char str [])
{
    for(int i = 0; i < strlen(str) ; i++)
        str[i] = toupper(str[i]);
}
int main()
{
    char str[200];
    lerString(str,200);

    strmaius(str);

    cout << str;

    return 0;
}
    Questão 29
#include <iostream>
#include <cstring>
using namespace std;
void lerString( char str[], int tamMaximo)
{
    if(cin.peek() == '\n')
        cin.ignore();
    cin.getline(str, tamMaximo);
}
int strchr ( char str[], char crct)
{
    for(int i =0; i < strlen(str); i++)
        if( str[i] == 's')
            return i;

    return -1;

}
    Questão 31
int main()
{
    char str[200];
    lerString(str,200);
    char letra;
    cin >> letra;

    cout <<  strchr(str, letra);

    return 0;
}

    QUESTÃO 34
    #include <iostream>
#include <cstring>
using namespace std;
void lerString( char str[], int tamMaximo)
{
    if(cin.peek() == '\n')
        cin.ignore();
    cin.getline(str, tamMaximo);
}
void strinv(char str [])
{
    for(int i = 0, j = (strlen(str)-1); i < (strlen(str)/2); i++, j--)
    {
        int aux = str[j];
        str[j] = str [i];
        str[i] = aux;
    }
}
int main()
{
    char str[200];
    lerString(str,200);
    strinv(str);
    cout << str;
    return 0;
}


    
    
    





    return 0;
}
