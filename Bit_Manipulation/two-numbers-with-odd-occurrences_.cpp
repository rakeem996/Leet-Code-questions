vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    int res=0; //the xor of odd numbers
    for(auto x: arr) {
        res^=x;
    }

    int setbit = 0;
    while(res) {
        if(res%2) {
            // setbit++;
            break;
        }
        res>>=1;
        setbit++;
    }

    int firstEle = 0; //with set bit
    int secondEle = 0; //with unset bit

    for(auto x: arr) {
        if(x & 1<<setbit) firstEle^=x;
        else secondEle^=x;
    }

    
    if(firstEle > secondEle) return {firstEle,secondEle};
    else return {secondEle, firstEle};


}