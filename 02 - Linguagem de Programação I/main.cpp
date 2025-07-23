#include <iostream>
using namespace std;

int main()
{
  int opcao = 2;
  int total = 0;

  switch (opcao)
  {
  case 1:
    cout << "Usuario cadastrado com sucesso!";
    break;
  case 2:
    cout << "Listando usuarios";
    break;
  case 3:
    cout << "Usuario removido com sucesso!";
    break;
  case 4:
  case 5:
    cout << "Buscando Usuario e atualizando com sucesso!";
    break;
  default:
    cout << "Opcao invalida!";
    break;
  }

  return 0;
}