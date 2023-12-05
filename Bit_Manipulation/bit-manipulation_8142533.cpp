int bitVal(vector<int> bit) {
    int i = 0;
    int res = 0;
    while(i<bit.size()) {
        res+=bit[i]*pow(2,i);
        i++;
    }
    return res;
}

vector<int> bitManipulation(int num, int i){
    // Write your code here.
    vector<int> bit(32,0);

    int temp = num;
    int j=0;
    while(temp) {
        int rem = temp%2;
        bit[j] = rem;
        j++;
        temp = temp/2;
    }

    // reverse(bit.begin(), bit.end());

    int ith_bit = bit[i-1];

    bit[i-1] = 1;

    int setBit = bitVal(bit);

    bit[i-1] = 0;

    int clearBit = bitVal(bit);

    return {ith_bit,setBit,clearBit};
}