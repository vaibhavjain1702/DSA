  int n,power,i,num;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>power;
    num=n;
    for(i=1;i<power;i++ ){
        num=num*n;
    }
    cout<<num;