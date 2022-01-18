​#​include​ ​<​iostream​> 
 ​using​ ​namespace​ ​std​; 
 ​int​ ​main​() 
 ​{ 
 ​    ​int​ i,j,k=​0​,n; 
 ​    ​char​ y; 
 ​    cout <<​"​Enter the no of rows​"​<<endl; 
 ​    cin >> n; 
 ​    cout <<​"​enter the type of character​"​<<endl; 
 ​    cin >> y; 
  
 ​    ​for​ (i = ​0​; i<=n; i++) 
 ​    { 
 ​        ​for​ (j = ​0​; j<i+k-​1​; j++) 
 ​        { 
 ​        cout<<​"​ ​"​<<y ; 
 ​        } 
 ​        k++; 
 ​        cout<<​"​\n​"​; 
 ​    } 
 ​}
