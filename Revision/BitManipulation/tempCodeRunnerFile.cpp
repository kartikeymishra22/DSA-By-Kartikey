void checkForPower(int n){
    int a = 1;
    int count= 0;

    while(n>0){
        if(n&a != 0){
            count++;
        }
        n = n>>1;
    }
   if(count == 1){
    cout<<"The number is a power of 2"<<endl;
   }
   else{
    cout<<"The number is not a power of 2"<<endl;
   }
}