#include <iostream>
using namespace std;

class Dooz {


public : 


char jadvalDooz[10] ; 

 Dooz() {  

 jadvalDooz[0] = '0';
 jadvalDooz[1] = '1';
 jadvalDooz[2] = '2';
 jadvalDooz[3] = '3';
 jadvalDooz[4] = '4';
 jadvalDooz[5] = '5';
 jadvalDooz[6] = '6';
 jadvalDooz[7] = '7';
 jadvalDooz[8] = '8';
 jadvalDooz[9] = '9';
        
    } 

void namayeshJadval(){ 
  


  cout « "Bazikon 1 (X)  -  Bazikon 2 (O)" « endl « endl;
  cout « endl;

  cout « "     #     #     " « endl;

cout « "  " « jadvalDooz[1] « "  #  " « jadvalDooz[2] « "  #  " « jadvalDooz[3] « endl;
  

  cout « "_____#_____#_____" « endl;
  cout « "     #     #     " « endl;

  cout « "  " « jadvalDooz[4] « "  #  " « jadvalDooz[5] « "  #  " « jadvalDooz[6] « endl;

  cout « "_____#_____#_____" « endl;
  cout « "     #     #     " « endl;

cout « "  " « jadvalDooz[7] « "  #  " « jadvalDooz[8] « "  #  " « jadvalDooz[9] « endl;

  
  cout « "     #     #     " « endl « endl;
}


int checkWin()
{
  if (jadvalDooz[1] == jadvalDooz[2] && jadvalDooz[2] == jadvalDooz[3])

    return 1;
  else if (jadvalDooz[4] == jadvalDooz[5] && jadvalDooz[5] == jadvalDooz[6])

    return 1;
  else if (jadvalDooz[7] == jadvalDooz[8] && jadvalDooz[8] == jadvalDooz[9])

    return 1;
  else if (jadvalDooz[1] == jadvalDooz[4] && jadvalDooz[4] == jadvalDooz[7])

    return 1;
  else if (jadvalDooz[2] == jadvalDooz[5] && jadvalDooz[5] == jadvalDooz[8])

    return 1;
  else if (jadvalDooz[3] == jadvalDooz[6] && jadvalDooz[6] == jadvalDooz[9])

    return 1;
  else if (jadvalDooz[1] == jadvalDooz[5] && jadvalDooz[5] == jadvalDooz[9])

    return 1;
  else if (jadvalDooz[3] == jadvalDooz[5] && jadvalDooz[5] == jadvalDooz[7])

    return 1;
  else if (jadvalDooz[1] != '1' && jadvalDooz[2] != '2' && jadvalDooz[3] != '3' && jadvalDooz[4] != '4' && jadvalDooz[5] != '5' && jadvalDooz[6] != '6' && jadvalDooz[7] != '7' && jadvalDooz[8] != '8' && jadvalDooz[9] != '9')



    return 0;
  else
    return -1;
}

};

Bazikon--;
    cin.ignore();
    cin.get();


    break;
}

    i = d.checkWin();

    Bazikon++;


  }while(i == -1);

  d.namayeshJadval();

  if (i == 1){
    cout « "==> Bazikon " «--Bazikon « " Barande Shod !";
    return 0;
  } else {
    cout « "==> Bazi Mosavi Shod !";
    return 0;
  }
  cin.ignore();
  cin.get();
  
  
  return 0;

}
int main(){
 Dooz d ; 
 int Bazikon = 1 ;
 int i ; 
 int khuneyeEntekhabi ; 
 



 char XorO;

  do
  {
    d.namayeshJadval();
    Bazikon=(Bazikon%2)?1:2;

    cout « "Bazikon " « Bazikon « ", Enter a number: ";
    cin » khuneyeEntekhabi;

    XorO=(Bazikon == 1) ? '&' : 'O';

switch(khuneyeEntekhabi){
  case 1:
    if(d.jadvalDooz[1] == '1')
      d.jadvalDooz[1] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  case 2:
    if(d.jadvalDooz[2] == '2')
      d.jadvalDooz[2] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  case 3:
    if(d.jadvalDooz[3] == '3')
      d.jadvalDooz[3] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  case 4:
    if(d.jadvalDooz[4] == '4')
      d.jadvalDooz[4] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  case 5:
    if(d.jadvalDooz[5] == '5')
      d.jadvalDooz[5] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  case 6:
    if(d.jadvalDooz[6] == '6')
      d.jadvalDooz[6] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  case 7:
    if(d.jadvalDooz[7] == '7')
      d.jadvalDooz[7] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  case 8:
    if(d.jadvalDooz[8] == '8')
      d.jadvalDooz[8] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  case 9:
    if(d.jadvalDooz[9] == '9')
      d.jadvalDooz[9] = XorO;
    else{
      cout « "Harekatet Eshtebah Bood ! ";
      Bazikon--;
      cin.ignore();
      cin.get();
    }
    break;
  default:
    cout « "Harekatet Eshtebah Bood ! ";