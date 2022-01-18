​#​include​ ​<​iostream​> 
 ​using​ ​namespace​ ​std​; 
 ​int​ ​main​() 
 ​{ 
 ​    ​int​ temp_ture; 
 ​    cout << ​"​Enter the tempreature​"​<< endl; 
 ​    cin >> temp_ture; 
 ​    ​if​ (temp_ture < ​60​) 
 ​    { 
 ​      cout <<​"​its really cold!​"​<<endl; 
 ​    } 
 ​    ​else​ ​if​ (temp_ture == ​60​ || temp_ture <= ​84​) 
 ​    { 
 ​      cout <<​"​its pleasent!​"​<<endl; 
 ​    } 
 ​    ​else​ ​if​ (temp_ture >= ​85​) 
 ​    { 
 ​      cout <<​"​its really hot!​"​<<endl; 
 ​    } 
 ​}
