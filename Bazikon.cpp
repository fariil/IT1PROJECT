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